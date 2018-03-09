

#define trigPin 6                       
#define echoPin 5                       
#define bulb 9                          

void setup()
  {
    pinMode(trigPin, OUTPUT);           //trigpin 6
    pinMode(echoPin, INPUT);            //echopin 5
    pinMode (bulb, OUTPUT);             //LED pin 9
    int count=0;            
  }
  
void loop()
  {
    int duration, distance;             
    digitalWrite(trigPin, HIGH);        
    delayMicroseconds(500);             
    digitalWrite(trigPin, LOW);         
    duration = pulseIn(echoPin, HIGH); 
    distance = (duration/2) / 29.1;    
    
    if (distance < 13)                  
    {        
     digitalWrite(bulb, HIGH);            
      count=1;
      delay(1000);         
    }
    if(count==1&&distance < 13){
      digitalWrite(bulb, LOW);            
      count=0;          
    }          
    delay(500);                         
  }
  
