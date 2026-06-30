const int micPin = 36;

void setup() {
  Serial.begin(115200);
}

void loop() {
  int minVal = 4095;
  int maxVal = 0;

  for (int i = 0; i < 100; i++) {
    int value = analogRead(micPin);
    if (value < minVal) minVal = value;
    if (value > maxVal) maxVal = value;
    delay(1);
  }

  int volume = maxVal - minVal;

  Serial.print("Min: ");
  Serial.print(minVal);
  Serial.print(" Max: ");
  Serial.print(maxVal);
  Serial.print(" Volume: ");
  Serial.println(volume);

  delay(50);
}