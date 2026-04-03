int const SING = 13;
int const DOUB = 10;

void setup() {
  // put your setup code here, to run once:
  pinMode(SING, OUTPUT);
  pinMode(DOUB, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(SING, HIGH);
  digitalWrite(DOUB, HIGH);
  delay(1000);
  digitalWrite(SING, LOW);
  delay(1000);
  digitalWrite(SING, HIGH);
  digitalWrite(DOUB, LOW);
  delay(1000);
  digitalWrite(SING, LOW);
  delay(1000);
  digitalWrite(SING, HIGH);
  digitalWrite(DOUB, HIGH);

}
