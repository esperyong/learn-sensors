void setup()
{       
   Serial.begin(9600);     
} 
void loop()
{       
   Serial.print("Moisture Sensor Value:");
   Serial.println(analogRead(0));     
   delay(1000);     
}
