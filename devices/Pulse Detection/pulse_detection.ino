#include <Adafruit_PN532.h>
#include <SPI.h>
#include <Wire.h>
#include <Adafruit_ILI9340.h>
#include <PulseSensorPlayground.h>

// Pulse sensor
#define PRESSURE A0

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

volatile int BPM;                   // int that holds raw Analog in 0. updated every 2mS
volatile int Signal;                // holds the incoming raw data
volatile int IBI = 600;             // int that holds the time interval between beats! Must be seeded! 
volatile boolean Pulse = false;     // "True" when User's live heartbeat is detected. "False" when not a "live beat". 
volatile boolean QS = false;        // becomes true when Arduoino finds a beat.

void setup(){
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
    // Pulse Sensor
    pulseSensor.analogInput(PULSE_INPUT);
}
void loop(){
    delay(20);
    if (pulseSensor.sawStartOfBeat()) {
        tft.setCursor(65, 40);
        tft.setTextColor(ILI9340_WHITE, ILI9340_BLACK);
        tft.setTextSize(4);
        tft.print("HeartBeat : ");
        tft.print(pulseSensor.outputBeat());
    }
    // NFC communication
    if(nfc.inListPassiveTarget()){
    for (int i = 0; i <= sizeof(message); i++){
        message[0] = 0;
        message[1] = 2;
        message[2] = pulseSensor.outputBeat();
        uint8_t sendLength = sizeof(message);
        nfc.inDataExchange(message[i], &sendLength, message, sizeof(message)))
        }
    }
}
