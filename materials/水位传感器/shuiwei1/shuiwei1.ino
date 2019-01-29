int val = 0;
int shuiwei = A0;
void setup() {
Serial.begin(9600);
}

void loop() {
val = analogRead(A0);
Serial.print("shui wei = ") ;
Serial.println(val);
delay(1000);
}
