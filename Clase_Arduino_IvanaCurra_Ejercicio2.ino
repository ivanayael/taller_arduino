void setup() {
  // put your setup code here, to run once:
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(11,255);
  analogWrite(10,0);
  delay(1000);
  analogWrite(11,100);
  analogWrite(10,15);
  delay(1000);
  analogWrite(11,15);
  analogWrite(10,100);
  delay(1000);
  analogWrite(11,0);
  analogWrite(10,255);
  delay(1000);
}
