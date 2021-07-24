unsigned char uart;

void setup() {
  Serial.begin(115200);
  pinMode(13, OUTPUT);
}

void loop() {
  if(Serial.available() > 0)
  {
    uart = Serial.read(); // receive
    Serial.write(uart);  // transmit

    if(uart == '1')
    {
      digitalWrite(13, HIGH);
      Serial.println("LED ON...");
    }
    else if(uart == '0')
    {
      digitalWrite(13, LOW);
      Serial.println("LED OFF...");
    }
  }
}
