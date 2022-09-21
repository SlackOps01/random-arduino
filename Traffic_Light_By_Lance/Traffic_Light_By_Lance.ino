void setup() {
  pinMode(11, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  // put your setup code here, to run once:

}

void loop() {
  digitalWrite(11, HIGH);
  digitalWrite(8, LOW);
  digitalWrite(7, LOW);
  delay(1000);
  digitalWrite(11, LOW);
  digitalWrite(8, HIGH);
  digitalWrite(7, LOW);
  delay(1000);
  digitalWrite(11, LOW);
  digitalWrite(8, LOW); 
  digitalWrite(7, HIGH);
  delay(1000);
  // put your main code here, to run repeatedly:

}
