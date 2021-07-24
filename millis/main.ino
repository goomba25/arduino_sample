extern volatile unsigned long timer0_millis;
unsigned long previous_times = 0;

void setup() {
  Serial.begin(115200);
  pinMode(13, OUTPUT);
  digitalWrite(13, LOW);
}

void loop() {
  unsigned long current_times = millis();

  if (current_times - previous_times >= 1000) {
    previous_times = current_times;

    if (digitalRead(13)) {
      digitalWrite(13, LOW);
    } else {
      digitalWrite(13, HIGH);
    }

    if (current_times >= 10000) {
    timer0_millis = 0;
    } else {
      Serial.println(timer0_millis);
    }
  }
}