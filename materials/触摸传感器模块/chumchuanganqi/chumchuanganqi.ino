int ledPin = 13;             // 设置指示灯为板载测试灯
int KEY = 2;                 // 连接触摸传感器到数字接口2

void setup()
{
    pinMode(ledPin, OUTPUT);   //设置连接到指示灯的管脚为输出模式
    pinMode(KEY, INPUT);       //设置触摸传感器的连接管脚为输入模式
}

void loop()
{
    if(digitalRead(KEY)==HIGH) //读取触摸传感器的状态值
    {
        digitalWrite(ledPin, HIGH);   //如果获取电平为高，则打开灯
    }
    else
    {
        digitalWrite(ledPin, LOW);    //如果获取电平为底，则关闭灯
    }
}
