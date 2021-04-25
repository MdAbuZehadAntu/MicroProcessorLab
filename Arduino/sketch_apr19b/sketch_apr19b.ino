void setup() {
  // put your setup code here, to run once:

  pinMode(13,OUTPUT);
  pinMode(9,INPUT);
  Serial.begin(9600); //9600 bps

}

void loop() {
  // put your main code here, to run repeatedly:
//  digitalWrite(13,HIGH);
//  delay(500);
//  digitalWrite(13,LOW);
//  delay(500);
  int i =digitalRead(9);
  Serial.println("Status of pin 9 : ");
  if(!i)
  {
    Serial.println(i);
    digitalWrite(13,HIGH);
    delay(200);
  }
  else
  {
    Serial.println(i);
    digitalWrite(13,LOW);
    delay(200);
  }


}
