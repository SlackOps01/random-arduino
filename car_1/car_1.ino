void setup() {
  // put your setup code here, to run once:
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  Serial.begin(9600);
}
void DriveForward(){
digitalWrite(2,1);
digitalWrite(3,0);
digitalWrite(4,0);
digitalWrite(5,1);
}
void DriveBackward(){
digitalWrite(2,0);;
digitalWrite(3,1);
digitalWrite(4,1);
digitalWrite(5,0);
}
void TurnLeft(){
digitalWrite(2,1);;
digitalWrite(3,0);
digitalWrite(4,0);
digitalWrite(5,0);
}
void TurnRight(){
digitalWrite(2,0);
digitalWrite(3,0);
digitalWrite(4,0);
digitalWrite(5,1);
}
void StopDriving(){
digitalWrite(2,0);
digitalWrite(3,0);
digitalWrite(4,0);
digitalWrite(5,0);
}
//end of functions  
void loop() {
  // put your main code here, to run repeatedly:
  DriveForward();
  delay(2000);
  DriveBackward();
  delay(2000);
  StopDriving();
  delay(1000);
}
