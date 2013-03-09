const int MOTION_SENSOR = 2;
const int RED_PIN = 8;
const int GREEN_PIN = 9;
const int BLUE_PIN = 10;

void setup () {
  Serial.begin(9600);
  Serial.println("Warming up...");
  delay(5000);
}

void loop() {
  Serial.print("IN2 = ");
  Serial.println(digitalRead(MOTION_SENSOR), DEC);
  int motion = digitalRead(MOTION_SENSOR);
  if (motion == 1){
    digitalWrite(RED_PIN, 255);
    digitalWrite(BLUE_PIN, 255);
  }
  else {
    digitalWrite(RED_PIN, 0);
    digitalWrite(BLUE_PIN, 0);
  }
  delay(200);
}
