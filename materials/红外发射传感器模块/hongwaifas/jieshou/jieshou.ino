#include <IRremote.h>
 const int RECV_PIN = 11;
 const int LED_PIN = 13;
 IRrecv irrecv(RECV_PIN);
 decode_results results;
 void setup()
 {
   Serial.begin(9600);
   irrecv.enableIRIn(); // Start the receiver
 }
 void loop() 
 {    
   if (irrecv.decode(&results)) 
   {
     if ( results.bits > 0 )
     {
       int state;
       if ( 0x1 == results.value )  
       {    
         state = HIGH;
       }
       else
       {
        state = LOW;
       }  
       digitalWrite( LED_PIN, state );      
     }
     irrecv.resume();        // prepare to receive the next value
   }
 }
