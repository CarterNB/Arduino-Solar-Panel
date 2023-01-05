int motorPin = 3;
int i=0;
void setup() {
   pinMode(motorPin, OUTPUT);
   Serial.begin(9600);
   Serial.println("START");
}

void loop() {
   for(i; i<255;i++)
   {
    analogWrite(motorPin,i);
    delay(50);
    Serial.println(i);
   }
  if(i==255)
 {
  i=0;  
 }

 
}
