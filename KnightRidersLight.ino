
//The setup function runs once when you press reset 
//or power the board
void setup() {
  // Initialize digital pins 2,3,4,5,6 and 7 as OUTPUT
  // as the LEDs are connected to these pins
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  digitalWrite(2, LOW);   // Turn OFF all the LEDs
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(7, LOW);    // Turn 6th LED OFF
  digitalWrite(2, HIGH);   // Turn 1st LED ON
  delay(50);               // wait for 50 milliseconds
  digitalWrite(2, LOW);    // Turn 1st LED OFF
  digitalWrite(3, HIGH);   // Turn 2nd LED ON
  delay(50);              
  digitalWrite(3, LOW);    // Turn 2nd LED OFF
  digitalWrite(4,HIGH);    // Turn 3rd LED ON
  delay(50);              
  digitalWrite(4, LOW);    // Turn 3rd LED OFF
  digitalWrite(5, HIGH);   // Turn 4th LED ON
  delay(50);              
  digitalWrite(5, LOW);    // Turn 5th LED OFF
  digitalWrite(6, HIGH);   // Turn 5th LED ON
  delay(50);              
  digitalWrite(6, LOW);    // Turn 5th LED OFF
  digitalWrite(7, HIGH);   // Turn 6th LED ON
  delay(50);              
}

