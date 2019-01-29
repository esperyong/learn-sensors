int pin = 0;  //模拟口0
int tempc = 0;//温度变量
int samples[8]; 
int maxi = -100,mini = 100; 
int i;
void setup(){
Serial.begin(9600); // 设置波特率为9600
}
void loop(){
for(i = 0;i<=7;i++)
{  
samples[i] = ( 5.0 * analogRead(pin) * 100.0) / 1024.0;
tempc = tempc + samples[i];
delay(100);
}
tempc = tempc/8.0; 
if(tempc > maxi) {maxi = tempc;} 
if(tempc < mini) {mini = tempc;} 
Serial.print(tempc,DEC); //打印温度值
Serial.print(" Celsius, ");
Serial.print(maxi,DEC);
Serial.print(" Max, ");
Serial.print(mini,DEC);
Serial.println(" Min");
tempc = 0;
delay(100);
}
