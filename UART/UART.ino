unsigned char uart = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available() > 0) {
    uart = Serial.read(); // receive
    Serial.write(uart);  // transmit
    
    if (uart == '/r' || uart == '\n') {
      Serial.write("/r/n");
    }
  }
} 
