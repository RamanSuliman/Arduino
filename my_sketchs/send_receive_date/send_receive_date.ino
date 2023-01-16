char receivedChar;    // define a variable to store characters received from serial port

void setup() {
  Serial.begin(9600);   // set baud rate
}

void loop() {
  if(Serial.available())  //If data has been received
  {
    receivedChar = Serial.read();   // Read one character (read 1 byte)
    Serial.print("Received: ");
    Serial.println(receivedChar);
  }
}
