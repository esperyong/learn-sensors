int magnetic=2;                //定义数字接口 9为magnetic（磁感应模块）
int led=13;                     //定义数字接口 8为LED灯
void setup()
{
  pinMode(led,OUTPUT);       //设置led为数字输出
  pinMode(magnetic,INPUT);     //设置magnetic为数字输入
}

void loop()
{
  if(digitalRead(magnetic))        //如果感应到强磁场
    digitalWrite(led, HIGH);    //LED灯亮起
  else                       //如果未感应到强磁场
    digitalWrite(led, LOW);    //LED灯熄灭
}
