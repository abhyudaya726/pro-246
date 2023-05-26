#define potential 4
const byte led_pin = 18;
int fade = 0;

void setup() {
  Serial.begin(9600);
  ledcAttachPin(led_pin,0);
  ledcSetup(0,2000,8);
}

void loop() {
  int analog_value = analogRead(potential);
  int brightness = map(analog_value,0,4094,0,255);
  ledcWrite(0,brightness);
  Serial.print("analog_value: ");
  Serial.print(analog_value);
  Serial.print(" ");
  Serial.print("Brightness: ");
  Serial.println(brightness);
  delay(500);
}
