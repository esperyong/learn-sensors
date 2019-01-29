#include <OneWire.h>
#include <DallasTemperature.h>
 
// 定义DS18B20数据口连接arduino的2号IO上
#define ONE_WIRE_BUS 2
 
// 初始连接在单总线上的单总线设备
OneWire oneWire(ONE_WIRE_BUS);
DallasTemperature sensors(&oneWire);
 
void setup(void)
{
  // 设置串口通信波特率
  Serial.begin(9600);
  Serial.println("Dallas Temperature IC Control Library Demo");
 
  // 初始库
  sensors.begin();
}
 
void loop(void)
{ 
  Serial.print("Requesting temperatures...");
  sensors.requestTemperatures(); // 发送命令获取温度
  Serial.println("DONE");
   
  Serial.print("Temperature for the device 1 (index 0) is: ");
  Serial.println(sensors.getTempCByIndex(0));
