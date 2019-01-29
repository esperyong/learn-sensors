int ctl = 3;//定义引脚
void setup()
{
pinMode(ctl,OUTPUT);  
} 
 
void loop()
{
  digitalWrite(ctl,HIGH);
  delay(1000);
  digitalWrite(ctl,LOW);
  delay(1000);
}
