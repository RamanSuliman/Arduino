int pin = 11;
int pin1 = 9;
int adcValue;   // Define a variable to save the ADC value

void setup() {
  // put your setup code here, to run once:
  pinMode(pin, OUTPUT);
  pinMode(pin1, OUTPUT);
}

void loop() {
  adcValue = analogRead(A0);  // Convert the analog of A0 port to digital
  // Map analog to the 0-255 range, and works as PWM duty cycle of ledPin port
  analogWrite(pin, map(adcValue, 0, 1023, 0, 255));
  //analogWrite(pin1, map(adcValue, 0, 1023, 0, 255));
}
