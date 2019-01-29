int X;
int Y;
int B;
void setup() {   
  Serial.begin(9600);
} 
void loop() {           
  X = analogRead(A0);      //读取A0口模拟值
  Y = analogRead(A1);      //读取A1口模拟值
  B = analogRead(A2);      //读取A2口模拟值
 Serial.println(X);
 Serial.println(Y);
 Serial.println(B);
 delay(1000);
}
