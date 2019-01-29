void setup()
{                         //初始化函数
   Serial.begin(9600);             //设置串口波特率为9600
} 
void loop()
{       
   Serial.print("Flame Sensor Value:");      //串口打印Flame Sensor Value:
   Serial.println(analogRead(0));              //串口打印A0口读取的模拟值
   delay(100);                                        //延时100ms
}
