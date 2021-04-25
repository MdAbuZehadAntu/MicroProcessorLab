void setup() {
  // put your setup code here, to run once:
  pinMode(12,OUTPUT);
  pinMode(8,INPUT);
  Serial.begin(9600);

}


void loop() {
  // put your main code here, to run repeatedly:

  if(Serial.available())
  { 
     int i = Serial.readString().toInt(); 
     Serial.print("The led will blink ");
     Serial.print(i);
     Serial.println(" times.");
     for(int j =0;j<i;j++)
     {
        digitalWrite(12,HIGH);
        delay(250);
        digitalWrite(12,LOW);
        delay(250);
     }
  }
  if(!digitalRead(8))
  {
    digitalWrite(12,HIGH);
  }
  else digitalWrite(12,LOW);

  float analog = analogRead(A0);
  Serial.print("Potentiometer read (analog) : ");
  Serial.print(analog/(1023/5));
  Serial.println(" V");
  delay(500);

  analog = analogRead(A5);
  Serial.print("LDR read (analog) : ");
  Serial.print(analog/(1023/5));
  Serial.println(" V");
  delay(500);
  
  

}
