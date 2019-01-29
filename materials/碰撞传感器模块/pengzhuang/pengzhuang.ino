int sw = 3;//定义引脚
int val = 0;
void setup()
{
  Serial.begin(9600);//设置波特率
pinMode(sw,INPUT);
} 
 
void loop()
{

val = digitalRead(sw);    //读传感器信息
   if(LOW == val)
   { 
  Serial.println(“switch is CLOSE”);
  delay(500);
   }
   else
   { 
  Serial.println(“switch is OPEN”);
delay(500);
   }
 }
