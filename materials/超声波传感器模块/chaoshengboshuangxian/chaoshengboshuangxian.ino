int inputPin=4;   //  定义超声波信号接收接口 
int outputPin=5;  //  定义超声波信号发出接口 
int ledpin=13;    // 定义ledPin 引脚为13 
void setup() 
{ 
  Serial.begin(9600); 
  pinMode(ledpin,OUTPUT); 
  pinMode(inputPin, INPUT); 
  pinMode(outputPin, OUTPUT); 
}                                                                                                                                          
void loop() 
{ 
  digitalWrite(outputPin, LOW); //使发出发出超声波信号接口低电平2 μs 
  delayMicroseconds(2); 
  digitalWrite(outputPin, HIGH); 
//使发出发出超声波信号接口高电平10μs ，这里是至少10μs 
  delayMicroseconds(10); 
  digitalWrite(outputPin, LOW);     // 保持发出超声波信号接口低电平 
  int distance = pulseIn(inputPin, HIGH);  //  读出脉冲时间 
  distance= distance/58;    // 将脉冲时间转化为距离（单位：厘米） 
  Serial.println(distance);   // 输出距离值                  
  delay(50);    
  if (distance >=50) 
  { //如果距离大于50厘米小灯亮起 
     digitalWrite(ledpin,HIGH); 
  } //如果距离小于50厘米小灯熄灭 
  else 
     digitalWrite(ledpin,LOW); 
}
