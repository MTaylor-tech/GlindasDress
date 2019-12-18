/* Glinda's Dress
 *  Code to make blue and white LEDs in Glinda's dress fade in and out
 *  As white brightens, blue will dim, and vice versa
 */

int ledPin = 9;    // White LEDs connected to pin 9
int ledPin2 =10;   // Blue LEDs connected to pin 10
int delayTime = 50;
int bottomValue = 10;
int topValue = 253;
int stepValue = 3;
int ledValue = 255;
int ledValue2 = bottomValue;
int u = 0;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(ledPin2, OUTPUT);
}

void loop() {
    
    if (topValue<=ledValue) {
      u=1;
    } else if (topValue<=ledValue2) {
      u=0;
    }
    
    if (0==u) {
      ledValue += stepValue;
      ledValue2 -= stepValue;
    } else {
      ledValue -= stepValue;
      ledValue2 += stepValue;
    }

    analogWrite(ledPin, ledValue);
    analogWrite(ledPin2, ledValue2);
    
    delay(delayTime);
}
