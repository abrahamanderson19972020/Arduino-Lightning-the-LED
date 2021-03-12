#include <Arduino.h>

void setup() {
// Sets the digital pin 13 as output
 Serial.begin(9600); 
pinMode(13, OUTPUT);
// Sets the digital pin 7 as input

}
void loop() {
    if (Serial.available()>0)
    {
        int rx= Serial.read();
        Serial.println(rx);
  
    switch (rx){
        case 49:
        digitalWrite(13, HIGH);
        break;
        case 48:
        digitalWrite(13, LOW);
        break;}

    }
}


    
// HIGH means not pressed, LOW means pressed