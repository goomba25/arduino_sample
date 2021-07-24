int LedPin = 11;
int duty_per = 0;


void setup() {
  // put your setup code here, to run once:
  pinMode(LedPin, OUTPUT);  
}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(LedPin, duty_per);
  delay(100);

  duty_per += 1;

  if(duty_per >= 256)
  {
    duty_per = 0;
  }
}
