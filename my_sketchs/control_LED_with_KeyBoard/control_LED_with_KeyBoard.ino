int integer_recevied;     // define a variable to store the data received from serial
int counter = 0;
int pin = 11;

void setup() {
  // put your setup code here, to run once:
  pinMode(pin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available())
  {
    integer_recevied = Serial.parseInt();
    Serial.print("received: ");
    Serial.println(integer_recevied);
    // convert the received integer into PWM duty cycle of ledPin port
    analogWrite(pin, constrain(integer_recevied, 0, 255));

    //constrain; ensure the given number is between the followed given range.
  }
}
