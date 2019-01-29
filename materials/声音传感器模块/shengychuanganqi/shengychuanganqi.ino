void setup()
{
   Serial.begin(9600); // 打开串口，设置波特率为9600 bps
}
void loop()
{
   int val;
   val=analogRead(0);   //传感器接于模拟口0
   Serial.println(val,DEC);//从串口发送数据并换行        
   delay(100);
}
