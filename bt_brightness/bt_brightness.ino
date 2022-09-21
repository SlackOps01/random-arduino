int red = 9;
int green  = 10;
int blue = 11;
int red_value = 0;
int green_value = 0;
int blue_value = 0;
char BluetoothData;
void setup() {
 pinMode(red,OUTPUT);
 pinMode(green,OUTPUT);
 pinMode(blue,OUTPUT);
Serial.begin(9600);
}

void loop() {
  if (Serial.available()){
    BluetoothData=Serial.read();
    if(BluetoothData=='R')red_value=Serial.parseInt();
    if(BluetoothData=='G')green_value=Serial.parseInt();
    if(BluetoothData=='B')blue_value=Serial.parseInt();
  }
  analogWrite(red,red_value);
  analogWrite(green,green_value);
  analogWrite(blue,blue_value);

}
