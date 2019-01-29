int hzPin = 2;
int ledPin =  13;     
int hzState = 0;        
void setup() {
  pinMode(ledPin, OUTPUT);      
  pinMode(hzPin, INPUT);     
}

void loop(){
  hzState = digitalRead(hzPin);
  if (hzState == LOW)
 {       
    digitalWrite(ledPin, HIGH);  
  } 
  else {
    digitalWrite(ledPin, LOW); 
  }
}
