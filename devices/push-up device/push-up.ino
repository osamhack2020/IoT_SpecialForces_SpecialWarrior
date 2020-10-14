// push-up device
# include <Ultrasonic.h>
Ultrasonic ultrasonic(9,8); // (Trig PIN,Echo PIN)
int btnPin 13;

void setup() {
    Serial.begin(9600);
    pinMode(buttonApin, INPUT_PULLUP);
}
void loop()
{
    Serial.print(ultrasonic.Ranging(CM));
    delay(500);
}