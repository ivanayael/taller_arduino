void setup() {
  // put your setup code here, to run once:
  
  pinMode(13, OUTPUT);
  pinMode(8, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  //Turning On Red Light(13 pin)
  digitalWrite(13, HIGH);
  delay(1000); // wait 1000 miliseconds
  digitalWrite(13, LOW);
  delay(1000); // wait 1000 miliseconds

  //Turning On Blue Light(8 pin)
  digitalWrite(8, HIGH);
  delay(1000); // wait 1000 miliseconds
  digitalWrite(8, LOW);
  delay(1000); // wait 1000 miliseconds
}
