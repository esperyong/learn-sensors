int zhendong = 3;
int led = 2;
int zhen = A0;
void setup() 
{
pinMode(2,OUTPUT);
pinMode(3,OUTPUT);
pinMode(A0,INPUT);
Serial.begin(9600);
}
void loop()
{
  int val = analogRead(A0);
  Serial.print("zhendong = ");
  Serial.println(val);
  digitalWrite(3,HIGH);
if(val > 30)
{
  digitalWrite(2,HIGH);
  delay(1000);
}
else
  digitalWrite(2,LOW);
}
