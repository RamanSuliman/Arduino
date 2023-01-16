int button = 12;
int pin = 3;
boolean isON = false;

void setup() {
  // put your setup code here, to run once:
  pinMode(button, INPUT);
  pinMode(pin, OUTPUT);
}

void loop() {
  if(digitalRead(button) == LOW)  //if button is pressed
  {
    delay(10);  //Delay for a certain time to skip the bounce
    if(digitalRead(button) == LOW) // Confirm the button is pressed
    {
      stop_on_off_stable();   //Turn on or off the LED.
      while(digitalRead(button) == LOW)   // as long the button is pressed wait for release to occure
      delay(10);  // delay for a certain time to skip bounce when the button is released
    }
  }
}

void stop_on_off_stable(){
  if(isON)
  {
    digitalWrite(pin, LOW);
    isON = false;
  }
  else
  {
    digitalWrite(pin, HIGH);
    isON = true;
  }
}
