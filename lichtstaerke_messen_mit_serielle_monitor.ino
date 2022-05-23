int entry = A0;
int led_blue = 13;
int led_blue_value;

void setup() {
  Serial.begin(9600);
  pinMode(led_blue, OUTPUT);
}

void loop() {
  led_blue_value = analogRead(entry);
  Serial.println("Sensorwert: ");
  Serial.println(led_blue_value);
    
  if (led_blue_value < 512) {
    digitalWrite(led_blue, HIGH);
  } else {
    digitalWrite(led_blue, LOW);
  }
  delay(2000);
}
