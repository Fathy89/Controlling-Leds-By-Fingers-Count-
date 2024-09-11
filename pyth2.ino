String c ; 
int led1 =7 ; 
int led2 =6 ; 
int led3 =5 ; 
int led4 =4 ; 

void setup() {
  // put your setup code here, to run once:
Serial.begin(115200)   ;   
pinMode(13,OUTPUT) ;
for (int i=4;i<=7 ; i++) { 
  pinMode(i ,OUTPUT) ; 
}

}

void loop() {

  // put your main code here, to run repeatedly:
if (Serial.available()>0){ 
 c  = Serial.readStringUntil('\r') ; 
int cnt = c.toInt() ; 
if  (cnt ==  0 ) {
digitalWrite(led1,0);
digitalWrite(led2,0);
digitalWrite(led3,0);
digitalWrite(led4,0);

}
else if  (cnt ==  1 ) {
digitalWrite(led1,1);
digitalWrite(led2,0);
digitalWrite(led3,0);
digitalWrite(led4,0);
  
}
else  if  (cnt ==  2 ) {
digitalWrite(led1,0);
digitalWrite(led2,1);
digitalWrite(led3,0);
digitalWrite(led4,0);

}
else  if  (cnt ==  3 ) {
digitalWrite(led1,0);
digitalWrite(led2,0);
digitalWrite(led3,1);
digitalWrite(led4,0);
}
else if  (cnt ==  4 ) {
digitalWrite(led1,0);
digitalWrite(led2,0);
digitalWrite(led3,0);
digitalWrite(led4,1);
}
else if  (cnt ==  5 ) {
digitalWrite(led1,1);
digitalWrite(led2,1);
digitalWrite(led3,1);
digitalWrite(led4,1);
}
}
}
