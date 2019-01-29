int led =13;                           //定义13号引脚链接LED发光模块
void setup() 
{ 
pinMode(led,OUTPUT);         //定义引脚为输出模式
} 
void loop() 
{ 
  digitalWrite(led, HIGH);      //点亮LED
  delay(1000);                     //延时等待1秒
  digitalWrite(led, LOW);       //熄灭LED
  delay(1000);                     //延时等待1秒
} 
