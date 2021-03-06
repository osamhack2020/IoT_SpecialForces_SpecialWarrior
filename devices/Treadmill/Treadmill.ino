// Treadmill device
#include <ThreadController.h>
#include <Thread.h>
#include <Adafruit_ILI9340.h>
#include <Adafruit_PN532.h>
#include <SPI.h>
#include <Wire.h>

// Button 
#define btnStart 13

// Buzzer
#define speakerPin = 12
int numTones = 7;
int count = 0;
// GGHHGGF(솔솔라라솔솔미) 학교종이 땡땡땡
int tones = [392,392,440,440,392,392,329];void setup(){

// Thread
ThreadController controll = ThreadController();
Thread myThread_btn = Thread();
Thread myThread_timer = Thread();

// Adafruit TFT LCD 2.2 Inch 320 * 240
#define _sclk 7
#define _miso 6
#define _mosi 5
#define _cs 4
#define _dc 3
#define _rst 2
Adafruit_ILI9340 tft = Adafruit_ILI9340(_cs, _dc, _rst);

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

// NFC message
// [type, exercise, data]
// type : 0(exam), 1(basic exercise)
// exam
// exercise(int) : 0(push-up), 1(sit-up), 2(treadmill)
// data(int) : push-up, sit-up : count
//        treadmill : time ([ex] 1030 : 10min 30sec)
// basic exercise
// exercise(int) : 0(lat-pull-down), 1(leg-press), 2(pulse)
// data(int) : lat-pull-down, leg-press : weight (1 data to 1 count)
//        pulse : heart-rate
uint8_t message[3];
uint8_t send;
uint8_t sendLength;
uint8_t response;
uint8_t responseLength;

// Timer
float startSec;
float pushSec;
float timerSec;
int goalTime;

void btnCallback(){
    int resistance = analogRead(A0);
    if (digitalRead(btnStart) == LOW){
       // push button, timer start
       pushSec = millis()
       // Variable resistance Treadmill
       while(true){
           int motor = map(resistance, 0, 1203, 0, 255);
           analogWrite(9, motor);
           distance = (255 * 4 * timerSec) / resistance;
           if(distance >= 3000){
               break;
           }
       }
    }
    // NFC communication
    if(nfc.inListPassiveTarget()){
    for (int i = 0; i <= sizeof(message); i++){
        message[0] = 0;
        message[1] = 2;
        message[2] = goalTime;
        uint8_t sendLength = sizeof(message);
        nfc.inDataExchange(message[i], &sendLength, message, sizeof(message)))
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
void timerCallback(){
    // Device start time
    startSec = millis();
    timerSec = int(startSec - pushSec)/1000;
    // min + sec
    int tMin = timerSec / 60;
    int tSec = timerSec % 60;
    goalTime = (tMin * 100 + tSec);
    tft.setCursor(65, 40);
    tft.setTextColor(ILI9340_WHITE, ILI9340_BLACK);
    tft.setTextSize(4);
    tft.print("TIME : ");
    tft.print(tMin);
    tft.print("min");
    tft.print(tSec);
    tft.print("sec");
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
    // ariable resistance
    pinMode(A0, INPUT);
    // DC motor
    pinMode(8, OUTPUT);
    // Thread
}
void loop() {
    controll.run();// Essential to use thread
}