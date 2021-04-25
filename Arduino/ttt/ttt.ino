void setup() {
  // put your setup code here, to run once:

//  pinMode(12,OUTPUT);
//  pinMode(4,INPUT_PULLUP);
  Serial.begin(9600); //9600 bps

}

void loop() {
  // put your main code here, to run repeatedly:
//  digitalWrite(13,HIGH);
//  delay(500);
//  digitalWrite(13,LOW);
//  delay(500);
//  int i =digitalRead(4);
//  Serial.print("Status of pin 4 : ");
//  if(!i)
//  {
//    Serial.println(i);
//    digitalWrite(12,HIGH);
//    delay(200);
//  }
//  else
//  {
//    Serial.println(i);
//    digitalWrite(12,LOW);
//    delay(200);
//  }

    if(Serial.available()>0) // if buffer is not empty
    {
      Serial.print("User Input is :");
      int x = Serial.readString().toInt();
      int f = 1;
      int p;
      Serial.println(x);
      Serial.print("Reply from arduino : Factorial  is : ");
      for(p=x;p>=1;p--)
      {
        f *= p;
      }
      Serial.println(f);
      
    }
    delay(500);


}
