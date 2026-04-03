int const SING = 13;

void setup() {
  // put your setup code here, to run once:
  pinMode(SING, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(SING, HIGH);
  delay(1000);
  digitalWrite(SING, LOW);
  delay(1000);
}