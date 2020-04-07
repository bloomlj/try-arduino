// Wiring / Arduino Code
// Code for sensing a switch status and writing the value to the serial port.

void setup() {
  Serial.begin(9600);                    // Start serial communication at 9600 bps
}

void loop() {
  if (analogRead(A0) > 400) {  
    Serial.write(1);               // send 1 to Processing
  } else {                               // If the switch is not ON,
    Serial.write(0);               // send 0 to Processing
  }
  delay(100);                            // Wait 100 milliseconds
}
