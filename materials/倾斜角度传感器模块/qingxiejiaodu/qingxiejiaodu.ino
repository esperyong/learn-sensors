int qingjiaoPin = 2;                       //定义倾角开关信号引脚数字2
int ledPin =  13;                           //定义板载LED引脚
int qingjiaoState = 0;                    //定义倾角状态
void setup() 
{
  pinMode(ledPin, OUTPUT);          //定义LED引脚为输出
  pinMode(qingjiaoPin, INPUT);      //定义倾角开关引脚为输入
  Serial.begin(9600);
}

void loop()
{
  qingjiaoState = digitalRead(qingjiaoPin);    //读取倾角开关引脚的值
  if (qingjiaoState == LOW) {                      //判断倾角开关的状态值是否为低电平
    digitalWrite(ledPin, HIGH);  //向LED引脚置高电平
    Serial.print("qing jiao State = ");
    Serial.println(qingjiaoState);
  } 
  else {
    digitalWrite(ledPin, LOW);                       //向LED引脚置低电平
    Serial.print("qing jiao State = ");
    Serial.println(qingjiaoState);
  }
}
