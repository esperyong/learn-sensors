const int buttonPin =2;     // 定义大按钮模块链接引脚
const int ledPin =  13;      // 定义板载LED引脚

int buttonState = 0;         // 定义大按钮模块状态变量

void setup() {
  // 初始化LED为输出模式
  pinMode(ledPin, OUTPUT);      
  //初始化大按钮模块为输入模式
  pinMode(buttonPin, INPUT);     
}

void loop(){
  // 读取按键状态
  buttonState = digitalRead(buttonPin);

  // 检查按键是否被按下
  if (buttonState == LOW) {     
    // 点亮LED 
    digitalWrite(ledPin, HIGH);  
  } 
  else {
    //熄灭LED
    digitalWrite(ledPin, LOW); 
  }
} 
