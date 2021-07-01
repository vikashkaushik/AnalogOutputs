/*
 * Project AnalogOutputs
 * Description: Changes through colors every second on the LED in a loop: red, green, blue, etc .
 * Author: Vikash Kaushik
 * Date:6/30/21
 */
SYSTEM_MODE(MANUAL);
SYSTEM_THREAD(ENABLED);
// setup() runs once, when the device is first turned on.
void setup() {
  // Put initialization like pinMode and begin functions here.
  pinMode(D5, OUTPUT);
  pinMode(D6, OUTPUT); 
  pinMode(D7, OUTPUT);
}

// loop() runs over and over again, as quickly as it can execute.
void loop() {
  // The core of your code will likely live here.
  
  // red
  analogWrite(D7, 255);
  analogWrite(D6,0); // turns it on 
  analogWrite(D5,0);
  delay(1000); // delay of 1 second

  // green
  analogWrite(D7, 0);
  analogWrite(D6,255); // turns it on 
  analogWrite(D5,0);
  delay(1000); // delay of 1 second


  // blue
  analogWrite(D7, 0);
  analogWrite(D6,0); // turns it on 
  analogWrite(D5,255);
  delay(1000); // delay of 1 second

  // orange
  analogWrite(D7, 255);
  analogWrite(D6,15); // turns it on 
  analogWrite(D5,0);
  delay(1000); // delay of 1 second

  // yellow
  analogWrite(D7, 255);
  analogWrite(D6,95); // turns it on 
  analogWrite(D5,0);
  delay(1000); // delay of 1 second

  // purple
  analogWrite(D7, 106);
  analogWrite(D6,13); // turns it on 
  analogWrite(D5,173);
  delay(1000); // delay of 1 second

  // cyan
  analogWrite(D7, 0);
  analogWrite(D6,255); // turns it on 
  analogWrite(D5,255);
  delay(1000); // delay of 1 second


 
}
