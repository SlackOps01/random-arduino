void setup() {
  pinMode(6,OUTPUT);
  pinMode(5,OUTPUT);
  // put your setup code here, to run once:

}

void loop() {
  digitalWrite(6,HIGH);
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(5,HIGH);
  // put your main code here, to run repeatedly:

}
