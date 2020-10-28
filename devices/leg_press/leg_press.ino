#include <Adafruit_ILI9340.h>
#include <Adafruit_PN532.h>
#include <SPI.h>
#include <Wire.h>
#include <HX711.h>

// Load cell
#define DOUT 3
#define CLK 2
HX711 scale(DOUT, CLK);

// Ultrasonic sensor
#define trigPin = 9
#define echoPin = 8

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

boolean flag = true;// Finish flag
boolean countFlag = false;
void setup(){
    scale.set_scale();
    scale.tare(); //Reset the scale to 0
    long zero_factor = scale.read_average(); //Get a baseline reading
}
void loop(){
    scale.set_scale(zero_factor); //Adjust to this calibration factor
    float tWeight = scale.get_units();
    while(flag){
        // use ultrasonic sensor
        digitalWrite(trig, LOW);
        digitalWrite(echo, LOW);
        delayMicroseconds(2);
        digitalWrite(trig, HIGH);
        delayMicroseconds(10);
        digitalWrite(trig, LOW);
        // store time
        unsigned long duration = pulseIn(echoPin, HIGH); 
        // calculate distance
        float distance = ((float)(340 * duration) / 10000) / 2;
        if(distance <= 30 && countFlag == flase){
            // NFC communication
            if(nfc.inListPassiveTarget()){
                for (int i = 0; i <= sizeof(message); i++){
                    message[0] = 1;
                    message[1] = 1;
                    message[2] = tWeight;
                    uint8_t sendLength = sizeof(message);
                    nfc.inDataExchange(message[i], &sendLength, message, sizeof(message)))
                }
            }
            countFlag = true;
        }else if(distance > 60 && countFlag == true){
            countFlag = false;
        }
        if(tWeight <= 1){
            // End
            flag = false;
        }
    }
}