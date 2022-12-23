 
const int IN1 =11;
const int IN2 =3;
const int IN3 =5;
const int IN4 =6;
const int ENA =9;
const int ENB =10;

int left_sensor =A0;
int right_sensor =A1;

void setup() 
{
  //this code run once:
  pinMode(IN1,OUTPUT);
  pinMode(IN2,OUTPUT);
  pinMode(IN3,OUTPUT);
  pinMode(IN4,OUTPUT);
  pinMode(ENA,OUTPUT);
  pinMode(ENB,OUTPUT);
  pinMode(A0,OUTPUT);
  pinMode(A1,OUTPUT);
}
void loop() 
{
   if(digitalRead(right_sensor)==HIGH && digitalRead(left_sensor)==HIGH) 
  {
    //Stop Motors
    analogWrite (enA, 0);
    analogWrite (enB, 0);
    digitalWrite(IN1,LOW);
    digitalWrite(IN2,LOW);
    digitalWrite(IN3,LOW);
    digitalWrite(IN4,LOW);
  
  }

  else if(digitalRead(right_sensor)==LOW && digitalRead(left_sensor)==LOW)
  {
    //Move forward
    analogWrite (enA, 200);
    analogWrite (enB, 200);
    digitalWrite(IN1,HIGH);
    digitalWrite(IN2,LOW);
    digitalWrite(IN3,HIGH);
    digitalWrite(IN4,LOW);
    
  }

  else if(digitalRead(right_sensor)==LOW && digitalRead(left_sensor)==HIGH)
  {
    //right side
    analogWrite (enA, 200);
    analogWrite (enB, 150);
    digitalWrite(IN1,HIGH);     
    digitalWrite(IN2,LOW);
    digitalWrite(IN3,LOW);
    digitalWrite(IN4,HIGH);
  
   delay(100);
  }

  else if(digitalRead(right_sensor)==HIGH && digitalRead(left_sensor)==LOW)
  {
    //left
    analogWrite (enA, 150);
    analogWrite (enB, 200);
    digitalWrite(IN1,LOW); 
    digitalWrite(IN2,HIGH);
    digitalWrite(IN4,HIGH);
    digitalWrite(IN3,LOW);
   
   delay(100);
  }

}
