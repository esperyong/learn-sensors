int duration;                           //变量duration 用来存储脉冲时间 
int distance;                           //变量distance 用来存储距离 
int srfPin = 2;                          //定义srfPin 引脚为 2  
void setup() 
{ 
Serial.begin(9600); 
} 
void loop() 
{ 
  pinMode(srfPin, OUTPUT); 
  digitalWrite(srfPin, LOW);            
  delayMicroseconds(2); 
  digitalWrite(srfPin, HIGH);           
  delayMicroseconds(10); 
  digitalWrite(srfPin, LOW);            
  pinMode(srfPin, INPUT); 
  duration = pulseIn(srfPin, HIGH);         
  distance = duration/58;        // 将脉冲时间转化为距离（单位：厘米） 
  Serial.println(distance);       // 输出距离值 
  delay(50);                             
} 
