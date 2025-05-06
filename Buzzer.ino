void setup() {
  pinMode(9, OUTPUT); // Set pin 9 as output for buzzer
}

void loop() {
  digitalWrite(9, HIGH); // Turn buzzer on
  delay(500);            // Beep duration (0.5 seconds)
  digitalWrite(9, LOW);  // Turn buzzer off
  delay(500);            // Silence (0.5 seconds)
}
