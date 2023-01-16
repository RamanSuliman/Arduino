/*
 * This will use serialEvent() method which handles interrupt event which is auto
 * triggered when data has been serially received in buffer.
 * 
 * This runs in control board3
 */
char receivedChar;
int counter = 0;
 
void setup() {
  Serial.begin(9600);
}

void loop() {
  //Code to be 
  Serial.print("counter: ");
  Serial.println(counter);
  delay(1200);
  counter++;
}

void serialEvent()
{
  if(Serial.available())
  {
    receivedChar = Serial.read();
    Serial.print("Received: ");
    Serial.println(receivedChar);
  }
}
