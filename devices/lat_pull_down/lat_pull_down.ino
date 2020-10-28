#include <Adafruit_ILI9340.h>
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

// Button
#define btn10kg 13
#define btn20kg 12
#define btn30kg 10
#define btn40kg 9
#define btn50kg 8
#define btn60kg 7
#define btn70kg 6
#define btn80kg 5
#define btn90kg 4
#define btn100kg 3
#define reedsw 2

int count = 0;
int tWeight = 0;
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
    pinMode(btn10kg, INPUT_PULLUP);
    pinMode(btn20kg, INPUT_PULLUP);
    pinMode(btn30kg, INPUT_PULLUP);
    pinMode(btn40kg, INPUT_PULLUP);
    pinMode(btn50kg, INPUT_PULLUP);
    pinMode(btn60kg, INPUT_PULLUP);
    pinMode(btn70kg, INPUT_PULLUP);
    pinMode(btn80kg, INPUT_PULLUP);
    pinMode(btn90kg, INPUT_PULLUP);
    pinMode(btn100kg, INPUT_PULLUP);
    pinMode(reedsw, INPUT);
}
void loop(){
    // todo
}