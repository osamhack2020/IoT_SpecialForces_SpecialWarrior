// push-up device
#include <LiquidCrystal.h>
# include <Ultrasonic.h>
Ultrasonic ultrasonic(9,8); // (Trig PIN,Echo PIN)
const int rs = 7, en = 6, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
int btnPin 13;

void setup() {
  	// set up the LCD's number of columns and rows
  	lcd.begin(16, 2);
  	// initialize the serial communications
    Serial.begin(9600);
  	// initialize the button pin
	pinMode(btnPin, INPUT_PULLUP);
}
void loop()
{
  // when characters arrive over the serial port...
  if(Serial.available()){
    // wait a bit for the entire message to arrive
    delay(100);
    // clear the screen
    lcd.clear();
    
    // when btnPin sign low
  	if (digitalRead(btnPin) == LOW)
    {
      // 
      while(Serial.available() > 0){
      	lcd.print(ultrasonic.Ranging(CM));
        delay(500);
        // clear the screen
        lcd.clear();
        lcd.setCursor(0, 1);
        sec = millis() / 1000;
        lcd.print(sec);
        if(sec == 120)
        {
        	break;
        }
      }
    }
  }
}