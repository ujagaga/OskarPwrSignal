#define OUT_PIN_1   0
#define OUT_PIN_2   1
#define IN_PIN      3

unsigned long periodTimestamp;

void setup() {                
  // initialize the digital pin as an output.
  pinMode(IN_PIN, INPUT);
  pinMode(OUT_PIN_1, OUTPUT); 
  digitalWrite(OUT_PIN_1, LOW); 
  pinMode(OUT_PIN_2, OUTPUT); 
  digitalWrite(OUT_PIN_2, LOW); 
  delay(100);               
  periodTimestamp = millis();
}


void loop() {    
  
   if(digitalRead(IN_PIN) == HIGH){
      if((millis() - periodTimestamp) > 60){
        digitalWrite(OUT_PIN_1, LOW); 
        digitalWrite(OUT_PIN_2, LOW);
        delay(500);  
      }
   }else{
      digitalWrite(OUT_PIN_1, HIGH); 
      digitalWrite(OUT_PIN_2, HIGH);
      periodTimestamp = millis();
   }              
}
