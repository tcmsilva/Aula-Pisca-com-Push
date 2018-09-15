c ₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢₢
/*
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino
  model, check the Technical Specs of your board at:

*/

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(100);                       // wait for a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(400);  
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(100);                       // wait for a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(400);  
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(100);                       // wait for a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(800);                       // wait for a second
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(800);                       // wait for a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(400);                       // wait for a second
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(800);                       // wait for a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(400);                       // wait for a second
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(800);                       // wait for a second 
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(800);                       // wait for a second
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(100);                       // wait for a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(400);  
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(100);                       // wait for a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(400);  
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(100);                       // wait for a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(2000);  
}
