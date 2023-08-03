/* modified from Sweep by BARRAGAN <http://barraganstudio.com>
 http://www.arduino.cc/en/Tutorial/Sweep
*/

#include <Servo.h>
Servo myservo;
int pos = 0;
void setup() { myservo.attach(10); }
void loop() {
  for (pos = 90; pos <= 170; pos += 1) { myservo.write(pos); delay(6); }
  for (pos = 170; pos >= 10; pos -= 1) { myservo.write(pos); delay(6); }
  for (pos = 10; pos <= 90; pos += 1) { myservo.write(pos); delay(6); }
}
