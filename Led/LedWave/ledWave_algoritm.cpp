void setup() {
  Serial.begin(9600);
  for ( int x = 8; x <= 12; ++x)
  {
    pinMode(x, OUTPUT);
  }
}
void loop()
{
  const int LEDS [5] = {8, 9, 10, 11, 12};
  for (int i = 0; i < 5; ++i)
  {
    digitalWrite(LEDS[i], !digitalRead(LEDS[i]));
    delay(500);
    //Serial.println(i);
  }
  for (int u = 4; u >= 0; --u)
  {
    digitalWrite(LEDS[u], !digitalRead(LEDS[u]));
    delay(500);
    //Serial.println(u);
  }
}
