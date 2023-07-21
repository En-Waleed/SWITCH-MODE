const int RED = 8;
const int GREEN = 9 ;
const int BLUE = 10;
const int BUTTON_1=5;
const int BUTTON_2=4;
const int BUTTON_3=3;
int conter_1=0 ;
int conter_2=0 ;
int conter_3=0 ;

void setup()
{
  pinMode(RED, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(BLUE, OUTPUT);
  pinMode(BUTTON_1, INPUT);
  pinMode(BUTTON_2, INPUT);
  pinMode(BUTTON_3, INPUT);

}
void loop()
{
  if(digitalRead(BUTTON_1)== HIGH){
    conter_1++;
  while(digitalRead(BUTTON_1)== HIGH){}}
  
  if(digitalRead(BUTTON_2)== HIGH){
    conter_2++;
    delay(250);}
  if(digitalRead(BUTTON_3)== HIGH){
    conter_3++;
    delay(250);}
  if (conter_1>2){conter_1=0;}
  

  switch (conter_1)
       {
   case 0:
     if (conter_2==1){
      digitalWrite(RED,HIGH);
      delay(500);
      digitalWrite(GREEN,HIGH);
      delay(500);
      digitalWrite(BLUE,HIGH);
      delay(500);
      conter_2=0;}
     else if (conter_3==1){
      digitalWrite(BLUE,LOW);
      delay(500);
      digitalWrite(GREEN,LOW);
      delay(500);
      digitalWrite(RED,LOW);
      delay(500);
      conter_3 =0; } break;
   case 1: 
          switch (conter_2){
            case 1:digitalWrite(RED,HIGH);break;
            case 2:digitalWrite(GREEN,HIGH);break;
            case 3:digitalWrite(BLUE,HIGH);
                   conter_2 = 0; break;}
          switch (conter_3){
            case 1:digitalWrite(BLUE,LOW);break;
            case 2:digitalWrite(GREEN,LOW);break;
            case 3:digitalWrite(RED,LOW);
                 conter_3 = 0;break;}
  case 2: 
          switch (conter_2){
            case 1:digitalWrite(RED,HIGH);
                 while(digitalRead(BUTTON_2)== HIGH){}break;
            case 2:digitalWrite(GREEN,HIGH);
                 while(digitalRead(BUTTON_2)== HIGH){}break;
            case 3:digitalWrite(BLUE,HIGH);
                 while(digitalRead(BUTTON_2)== HIGH){}
                 conter_2 = 0;   break;}
          switch (conter_3){
            case 1:digitalWrite(BLUE,LOW);
                  while(digitalRead(BUTTON_3)== HIGH){}break;
            case 2:digitalWrite(GREEN,LOW);
                  while(digitalRead(BUTTON_3)== HIGH){}break;
            case 3:digitalWrite(RED,LOW);
                  while(digitalRead(BUTTON_3)== HIGH){}
                  conter_3 = 0;  break;}
         }

 }
