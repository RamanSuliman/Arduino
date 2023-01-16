/*This detects the voltage of rotary potentiometer and sends data to Serial Monitor window
/ of Ardunio IDE through the serial port.
*/

int adcValue;  // Define a variable to save ADC value
float voltage; // Define a variable to save the calculated voltage value

void setup() {
  Serial.begin(9600);
}

void loop() {
  adcValue =  analogRead(A0);   //Convert analog of pin A0 to digital
  voltage = adcValue * (5.0 / 1023.0);  //Calculate voltage according to digital
  // Send the result to computer through serial
   Serial.print("convertValue:");
   Serial.println(adcValue);
   Serial.print("Voltage:");
   Serial.println(voltage);
   delay(500);
}
