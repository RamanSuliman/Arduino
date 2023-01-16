int button = 12;
int pin = 3;
int value = 255;
boolean reverse = false;

void setup() {
  // put your setup code here, to run once:
  pinMode(button, INPUT);
  pinMode(pin, OUTPUT);  
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(button) == LOW)
  {
    delay(10);
    if(digitalRead(button) == LOW)
    {
      control_LED();
    }
  }
}

void control_LED()
{
  if(value > 0 && value == 100)
  value -= 10;
  digitalWrite(pin, map(value, 0, 100, 0, 255));
}
