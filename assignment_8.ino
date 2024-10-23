// Joel Berns
// Ryan Cabrera
// Saket Varanasi
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, INPUT);
}

// the loop function runs over and over again forever
  int i = 0;
  int j;
void loop() {
  if (digitalRead(9) == HIGH) {
    j = (i % 3) + 6;
    digitalWrite(j, HIGH);  // turn the LED on (HIGH is the voltage level)
    delay(1000);                      // wait for a second
    digitalWrite(j, LOW);   // turn the LED off by making the voltage LOW
    delay(1000);   // wait for a second
    i++;
    }
    else {
      i = 0;
    }                   
}
