byte sensorPin = 2; //设置传感器引脚为数字接口2
byte indicator = 13; //设置指示器引脚为数字接口13
void setup()
{
  pinMode(sensorPin,INPUT); //设置传感器引脚为输入模式
  pinMode(indicator,OUTPUT);//设置指示器引脚为输出模式
  Serial.begin(9600);
}
void loop()
{
  byte state = digitalRead(sensorPin);       //读取传感器的状态
  digitalWrite(indicator,state);             //输出指示器的状态
  if(state == 1)
  Serial.println("Somebody is in this area!"); //通过串口输出当前状态
  else if(state == 0)
  Serial.println("No one!");
  delay(500); //延时500ms
}
