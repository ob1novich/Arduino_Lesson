void setup() {
  pinMode(8, OUTPUT);
}

void loop() {
  const int delayTime = 1500;
  threeDots(200, 100);
  delay(delayTime);
  threeDashes(400, 200);
  delay(delayTime);
  threeDots(200, 100);
  delay(delayTime);
}

void threeDots(int timeHigh, int timeLow) {
  for (int dot = 0; dot < 3; ++dot)
  {
    digitalWrite(8, HIGH);
    delay(timeHigh);
    digitalWrite(8, LOW);
    delay(timeLow);
  }
}
void threeDashes (int timeHigh, int timeLow) {
  for (int dashes = 0; dashes < 3; ++dashes) {
    digitalWrite(8, HIGH);
    delay(timeHigh);
    digitalWrite(8, LOW);
    delay(timeLow);
  }
}
