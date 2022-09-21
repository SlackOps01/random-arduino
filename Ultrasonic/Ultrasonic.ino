int blue = 8;
int red = 7;
int green = 6;
int button = 5;
int trig = 4;
int echo = 3;
float duration;
float distance;
void setup() {
  Serial.begin(9600);
  pinMode(8,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(4,OUTPUT); 
  pinMode(5,INPUT);
  pinMode(3,INPUT);

}

void loop() {
  digitalWrite(trig,LOW);
  delayMicroseconds(3);
  digitalWrite(trig,HIGH);
  delayMicroseconds(7);
  
  duration = pulseIn(echo,HIGH);
  distance = (340*duration)/20000;
  Serial.print("distance=");
  Serial.println(distance);
  delay(1000);
  if(distance>=11){digitalWrite(red,HIGH);}
  else{digitalWrite(red,LOW);}
  if(distance>=7&&distance<=10){digitalWrite(blue,HIGH);}
  else{digitalWrite(blue,LOW);}
  if(distance>=0&&distance<=6){digitalWrite(green,HIGH);}
  else{digitalWrite(green,LOW);}
  delay(200);
  
  

}
