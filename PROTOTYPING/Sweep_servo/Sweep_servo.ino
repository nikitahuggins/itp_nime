#include <Servo.h> 
 
Servo myservo;  
Servo myservo2; 
 
int pos = 0;    
int pos2 = 0;
void setup() 
{ 
  myservo.attach(9);
  myservo2.attach(8);
} 
 
void loop() 
{ 
  //comtrolling metal hitting servo
  for(pos = 0; pos <= 5; pos += 1) 
  {                                 
    myservo.write(pos);              
    delay(2);                       
  } 
  for(pos = 5; pos>=0; pos-=1)      
  {                                
    myservo.write(pos);              
    delay(15);                       
  } 

  for(pos2 = 0; pos2 <= 10; pos2 += 1) 
  {                                  
    myservo2.write(pos2);             
    delay(15);                       
  } 
  for(pos2 = 10; pos2>=0; pos2-=1)     
  {                                
    myservo2.write(pos2);             
    delay(15);                    
  } 
} 
