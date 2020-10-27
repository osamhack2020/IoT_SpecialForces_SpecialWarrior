// sit-up device
#include <LiquidCrystal.h>
#include <ThreadController.h>
#include <Thread.h>
#include <Adafruit_ILI9340.h>
#include <SoftwareSerial.h>
#include <Adafruit_PN532.h>
#include <SPI.h>
#include <Wire.h>

// NFC communication
 #define PN532_SCK (A1)
 #define PN532_MISO (A2)
 #define PN532_MOSI (A3)
 #define PN532_SS (A4)
// #define PN532_IRQ (A0)
// #define PN532_RESET (A5)
Adafruit_PN532 nfc(PN532_SCK, PN532_MISO, PN532_MOSI, PN532_SS);
#if defined(ARDUINO_ARCH_SAMD)
   #define Serial SerialUSB
#endif

// Adafruit TFT LCD 2.2 Inch 320 * 240
#define _sclk 7
#define _miso 6
#define _mosi 5
#define _cs 4
#define _dc 3
#define _rst 2
Adafruit_ILI9340 tft = Adafruit_ILI9340(_cs, _dc, _rst);

// Photo interrupter
#define photo (A0)

// Button
#define btnStart 13
#define btnReset 11

// Buzzer
#define speakerPin = 12
int numTones = 7;
int count = 0;
//GGHHGGF(솔솔라라솔솔미) 학교종이 땡땡땡
int tones = [392,392,440,440,392,392,329];

// Thread
ThreadController controll = ThreadController();
Thread myThread_btn = Thread();
Thread myThread_timer = Thread();

// counting flag
boolean flag = false; 

// Timer
float startSec = 0;
float pushSec = 0;
int twomin = 0;

uint8_t message[2];
uint8_t send;
uint8_t sendLength;
uint8_t response;
uint8_t responseLength;

void btnCallback(){
  // when characters arrive over the serial port...
  if(Serial.available()){
    // wait a bit for the entire message to arrive
    // Test TFT screen
    //tft.fillScreen(ILI9340_BLACK);
    // when btnStart sign low
  	if (digitalRead(btnStart) == LOW){
      // push button, timer start
      pushSec = millis()
      // when serial port available
      while(Serial.available() > 0){
        // use ultrasonic sensor
        distance = analogRead(A0);
        // counting sit-up
        if(distance =< 200 && flag == false){
          count =+ 1;
          flag = true;
        }
        if(distance > 200 && flag == true){
          flag = false;
        }
      }
    }
  }
}
void timerCallback{
  startSec = millis();
  twomin = int(startSec - pushSec)/1000;
  if(pushSec != 0){
    // TFT START
    tft.setCursor(65, 40);
    tft.setTextColor(ILI9340_WHITE, ILI9340_BLACK);
    tft.setTextSize(4);
    tft.print("TIME : ");
    tft.print(twomin);
    tft.print(" sec");
    tft.setCursor(110, 70);
    tft.setTextColor(ILI9340_WHITE, ILI9340_BLACK);
    tft.setTextSize(4);
    tft.print("Count : ");
    tft.print(count);
    if(twomin == 120){
      // NFC communication
      if(nfc.inListPassiveTarget()){
        while (true){
          message[0] = 1;
          message[1] = count;
          uint8_t sendLength = sizeof(message);
          nfc.inDataExchange(message, &sendLength, message, sizeof(message)))
          }
        }
      }
      // Finish sound
      for(int i = 0; i < numTones; i++){
        tone(speakerPin, tones[i]);
        delay(500);
      }
      noTone(speakerPin);
      // Restart On
      digitalWrite(btnReset, LOW);
    }
  }
}

void setup() {
  // Change analog to digital
  pinMode(A1, OUTPUT);
  pinMode(A2, OUTPUT);
  pinMode(A3, OUTPUT);
  pinMode(A4, INPUT);
  // NFC setup
  #ifndef ESP8266
  while (!Serial);// for Leonardo/Micro/Zero
  #endif
  Serial.begin(115200);
  nfc.begin();
  uint32_t versiondata = nfc.getFirmwareVersion();
  if (! versiondata)
  {
      while (1); // halt
  }
 // the default behaviour of the PN532.
  nfc.setPassiveActivationRetries(0xFF);
  // configure board to read RFID tags
  nfc.SAMConfig();
  nfc.begin();
  // Restart Off
  digitalWrite(btnReset, HIGH);
  // TFT LCD initialization
  tft.begin();
  tft.setRotation(3);
  tft.fillScreen(ILI9340_BLACK);
  speedText();
  // Initialize the serial communications
  Serial.begin(9600);
  // Initialize the button pin
  pinMode(btnStart, INPUT_PULLUP);
  pinMode(btnReset, OUTPUT);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  // Thread
  myThread_btn.onRun(btnCallback);
  myThread_timer.onRun(timerCallback);
  controll.add(&myThread_btn);
  controll.add(&myThread_timer);
}
void loop(){
  controll.run();// Essential to use thread
}