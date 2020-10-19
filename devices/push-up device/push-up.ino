// push-up device
#include <LiquidCrystal.h>
#include <ThreadController.h>
#include <Thread.h>

int trigPin = 9;
int echoPin = 8;
const int rs = 7, en = 6, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
int btnPin 13;
int speakerPin = 12; //buzzer
int numTones = 7;
int count = 0;
int tones = [392,392,440,440,392,392,329]; //GGAAGGE

void btnCallback(){
  // when characters arrive over the serial port...
  if(Serial.available()){
    // wait a bit for the entire message to arrive
    delay(100);
    // clear the screen
    lcd.clear();
    
    // when btnPin sign low
  	if (digitalRead(btnPin) == LOW){
      // when serial port available
      while(Serial.available() > 0){
        // use ultrasonic
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
        // counting push-up
        if(distance < 12){
          count =+ 1;
          lcd.print("count : " + count)
          delay(200);
        }
        // clear the screen
        lcd.clear();
        lcd.setCursor(0, 1);
        sec = millis() / 1000;
      }
      // initialize count
      count = 0;
      // finish sound
      for(int i = 0; i < numTones; i++){
        tone(speakerPin, tones[i]);
        delay(500);
      }
      noTone(speakerPin);
      delay(1000);
    }
  }
}
void timerCallback{
  lcd.print("second : " + sec);
      if(sec == 120){
        // stop
      }
}

void setup() {
  // set up the LCD's number of columns and rows
  lcd.begin(16, 2);
  // initialize the serial communications
  Serial.begin(9600);
  // initialize the button pin
  pinMode(btnPin, INPUT_PULLUP);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  //thread
  myThread_btn.onRun(btnCallback);
  myThread_timer.onRun(timerCallback);
  controll.add(&myThread_btn);
  controll.add(&myThread_timer);
}
void loop()
{
  controll.run(); //essential to use thread
}