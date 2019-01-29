#define LED 9
int i = 0;

void setup()
{
  pinMode(LED,OUTPUT);
}
void loop()
{
for(i=0;i<255;i++)
  {
    analogWrite(LED,i);
    delay(15);
  }
  for(i=255;i>0;i--)
  {
    analogWrite(LED,i);
    delay(15);
  }
  analogWrite(LED,0);
  delay(1000);
}
