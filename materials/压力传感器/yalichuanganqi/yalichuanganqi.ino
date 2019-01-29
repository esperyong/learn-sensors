 #define FORCE 0
float value = 0;float resistance = 0;
void setup()
{
  Serial.begin(9600);
  Serial.println("0.5\" Force Sensitive Resistor Test");
}
void loop()
{
  value = analogRead(FORCE);
  resistance = ((26.4 * value)/(1-(value/1023.0)));
  Serial.println(resistance,DEC);
  delay(200);
}
