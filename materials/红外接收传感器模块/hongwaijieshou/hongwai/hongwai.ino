#define IR_LED  2   //IR 接收数字口2 
#define MAX  128 
#define MICRO_STEP  10 
#define IDLE_PULSE  4000 
unsigned long pulses[MAX]; 
unsigned char IRCOM[7]; 
unsigned long z; 
int w; 
byte f=B00000000; // 定义f 为位 
int n; 
int ledpin=9; // 定义数字口9 为LED 模块接口 
void setup() 
{ 
  pinMode(IR_LED, INPUT); 
  Serial.begin(115200); 
  pinMode(ledpin,OUTPUT); //定义ledpin 为输出模式 
} 
                                                             
void loop() 
{   
  if( digitalRead(IR_LED) == LOW) 
  { 
    // 开始接收数据 
        int count = 0; 
        int exit = 0; 
    while(!exit) 
    { 
      while( digitalRead(IR_LED) == LOW ) 
         delayMic roseconds(MICRO_STEP); 
      unsigned long start = micros(); 
      int max_high = 0; 
      while( digitalRead(IR_LED) == HIGH ) 
      { 
        delayMic roseconds(MICRO_STEP); 
        max_high += MICRO_STEP; 
        if( max_high > IDLE_PULSE ) 
        { 
          exit = 1; 
          break; 
        }
      }
      unsigned long duration = micros() - start;
      pulses[count++] = duration;
    }
    for(int i=3; i<4; i++) 
    { 
      for(int j=0;j<8;j++) 
      { 
        if(pulses[ i*8+j+1] < IDLE_PULSE) 
         { 
            IRCOM[i]=IRCOM [i] >> 1;            
            if((pulses[i*8+j+1])>1000) 
               {IRCOM[i] = IRCOM[i] | 0x80;}             
         } 
       z= pulses[i*8+j+1];  //将接收到的脉冲数据转换成十进制                                                                      
       if(z<800) 
          w=10000000;  //如果Z 小于800  w=10000000 
       else 
          w=00000000;  //如果Z 大于800  w=00000000 
       f=f>>1;         // 将f 右移1 位 
       f=f+w;       
     } 
    } 
   n=int(f); 
   Serial.print(n);// 将接收到的数据打印到串口上 
   analogWrite(ledpin,n); //将接收到的数据写入ledpin 接口，控制LED 亮度 
  } 
} 
