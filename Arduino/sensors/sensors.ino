void setup() {
 
  Serial.begin(9600); //9600 bps
  pinMode(10,OUTPUT);

}
int temp = 1023;
void loop() {

  int analog_read = analogRead(A2);
  Serial.print("LDR sensor read (Digital) : ");
  Serial.println(analog_read);
  if (analog_read > 512 )
    {
      digitalWrite(10,HIGH);
    }
   else
   {
      digitalWrite(10,LOW);
   }
  
  if( analog_read > temp)
  {
    Serial.println("It's getting darker!!!");

    
    
  }
  else if (analog_read < temp )
  {
    Serial.println("It's getting brighter!!!");
    
  }
  else
  {
    Serial.println("No change in the brightness!!!");
  }
  
  temp = analog_read;
 
  
  
  delay(1000);
  


   

}
