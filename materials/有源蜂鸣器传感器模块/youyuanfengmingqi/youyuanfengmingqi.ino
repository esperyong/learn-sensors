int buzzPin=3 ;                             //定义蜂鸣器链接引脚
void setup()
{  
      pinMode(buzzPin ,OUTPUT);   //定义引脚模式为输出模式
}

void loop()
{
    digitalWrite(buzzPin,HIGH);      //输入高电平
    delay(1000);                           //延时1秒
    digitalWrite(buzzPin,LOW);       //输入低电平
    delay(1000);                           //延时1秒
 }
