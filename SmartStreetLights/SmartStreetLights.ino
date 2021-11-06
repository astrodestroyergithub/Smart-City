void setup() 
{
  pinMode(9,INPUT);
  pinMode(10,INPUT);
  pinMode(11,INPUT);
  pinMode(12,INPUT);
  pinMode(13,INPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  
  Serial.begin(9600);
}

void loop()
{
  //Smart street lights
  if (digitalRead(9)==LOW&&digitalRead(10)==LOW&&digitalRead(11)==LOW&&digitalRead(12)==LOW&&digitalRead(13)==LOW)
  {
    digitalWrite(3,HIGH);
    digitalWrite(4,HIGH);
    digitalWrite(5,HIGH);
    digitalWrite(6,HIGH);
    digitalWrite(7,HIGH);
    delay(10);
  }
  else if (digitalRead(9)==LOW&&digitalRead(10)==LOW&&digitalRead(11)==LOW&&digitalRead(12)==HIGH&&digitalRead(13)==LOW)
  {
    digitalWrite(3,HIGH);
    digitalWrite(4,HIGH);
    digitalWrite(5,HIGH);
    digitalWrite(6,LOW);
    digitalWrite(7,HIGH);
    delay(10);
  }
  else if (digitalRead(9)==LOW&&digitalRead(10)==LOW&&digitalRead(11)==LOW&&digitalRead(12)==LOW&&digitalRead(13)==HIGH)
  {
    digitalWrite(3,HIGH);
    digitalWrite(4,HIGH);
    digitalWrite(5,HIGH);
    digitalWrite(6,HIGH);
    digitalWrite(7,LOW);
    delay(10);
  }
  else if (digitalRead(9)==LOW&&digitalRead(10)==LOW&&digitalRead(11)==LOW&&digitalRead(12)==HIGH&&digitalRead(13)==HIGH)
  {
    digitalWrite(3,HIGH);
    digitalWrite(4,HIGH);
    digitalWrite(5,HIGH);
    digitalWrite(6,LOW);
    digitalWrite(7,LOW);
    delay(10);
  }
  else if (digitalRead(9)==LOW&&digitalRead(10)==LOW&&digitalRead(11)==HIGH&&digitalRead(12)==LOW&&digitalRead(13)==LOW)
  {
    digitalWrite(3,HIGH);
    digitalWrite(4,HIGH);
    digitalWrite(5,LOW);
    digitalWrite(6,HIGH);
    digitalWrite(7,HIGH);
    delay(10);
  }
  else if (digitalRead(9)==LOW&&digitalRead(10)==LOW&&digitalRead(11)==HIGH&&digitalRead(12)==HIGH&&digitalRead(13)==LOW)
  {
    digitalWrite(3,HIGH);
    digitalWrite(4,HIGH);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    digitalWrite(7,HIGH);
    delay(10);
  }
  else if (digitalRead(9)==LOW&&digitalRead(10)==LOW&&digitalRead(11)==HIGH&&digitalRead(12)==LOW&&digitalRead(13)==HIGH)
  {
    digitalWrite(3,HIGH);
    digitalWrite(4,HIGH);
    digitalWrite(5,LOW);
    digitalWrite(6,HIGH);
    digitalWrite(7,LOW);
    delay(10);
  }
  else if (digitalRead(9)==LOW&&digitalRead(10)==LOW&&digitalRead(11)==HIGH&&digitalRead(12)==HIGH&&digitalRead(13)==HIGH)
  {
    digitalWrite(3,HIGH);
    digitalWrite(4,HIGH);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    digitalWrite(7,LOW);
    delay(10);
  }
  else if (digitalRead(9)==LOW&&digitalRead(10)==HIGH&&digitalRead(11)==LOW&&digitalRead(12)==LOW&&digitalRead(13)==LOW)
  {
    digitalWrite(3,HIGH);
    digitalWrite(4,LOW);
    digitalWrite(5,HIGH);
    digitalWrite(6,HIGH);
    digitalWrite(7,HIGH);
    delay(10);
  }
  else if (digitalRead(9)==LOW&&digitalRead(10)==HIGH&&digitalRead(11)==LOW&&digitalRead(12)==HIGH&&digitalRead(13)==LOW)
  {
    digitalWrite(3,HIGH);
    digitalWrite(4,LOW);
    digitalWrite(5,HIGH);
    digitalWrite(6,LOW);
    digitalWrite(7,HIGH);
    delay(10);
  }
  else if (digitalRead(9)==LOW&&digitalRead(10)==HIGH&&digitalRead(11)==LOW&&digitalRead(12)==LOW&&digitalRead(13)==HIGH)
  {
    digitalWrite(3,HIGH);
    digitalWrite(4,LOW);
    digitalWrite(5,HIGH);
    digitalWrite(6,HIGH);
    digitalWrite(7,LOW);
    delay(10);
  }
  else if (digitalRead(9)==LOW&&digitalRead(10)==HIGH&&digitalRead(11)==LOW&&digitalRead(12)==HIGH&&digitalRead(13)==HIGH)
  {
    digitalWrite(3,HIGH);
    digitalWrite(4,LOW);
    digitalWrite(5,HIGH);
    digitalWrite(6,LOW);
    digitalWrite(7,LOW);
    delay(10);
  }
  else if (digitalRead(9)==LOW&&digitalRead(10)==HIGH&&digitalRead(11)==HIGH&&digitalRead(12)==LOW&&digitalRead(13)==LOW)
  {
    digitalWrite(3,HIGH);
    digitalWrite(4,LOW);
    digitalWrite(5,LOW);
    digitalWrite(6,HIGH);
    digitalWrite(7,HIGH);
    delay(10);
  }
  else if (digitalRead(9)==LOW&&digitalRead(10)==HIGH&&digitalRead(11)==HIGH&&digitalRead(12)==HIGH&&digitalRead(13)==LOW)
  {
    digitalWrite(3,HIGH);
    digitalWrite(4,LOW);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    digitalWrite(7,HIGH);
    delay(10);
  }
  else if (digitalRead(9)==LOW&&digitalRead(10)==HIGH&&digitalRead(11)==HIGH&&digitalRead(12)==LOW&&digitalRead(13)==HIGH)
  {
    digitalWrite(3,HIGH);
    digitalWrite(4,LOW);
    digitalWrite(5,LOW);
    digitalWrite(6,HIGH);
    digitalWrite(7,LOW);
    delay(10);
  }
  else if (digitalRead(9)==LOW&&digitalRead(10)==HIGH&&digitalRead(11)==HIGH&&digitalRead(12)==HIGH&&digitalRead(13)==HIGH)
  {
    digitalWrite(3,HIGH);
    digitalWrite(4,LOW);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    digitalWrite(7,LOW);
    delay(10);
  }
  else if (digitalRead(9)==HIGH&&digitalRead(10)==LOW&&digitalRead(11)==LOW&&digitalRead(12)==LOW&&digitalRead(13)==LOW)
  {
    digitalWrite(3,LOW);
    digitalWrite(4,HIGH);
    digitalWrite(5,HIGH);
    digitalWrite(6,HIGH);
    digitalWrite(7,HIGH);
    delay(10);
  }
  else if (digitalRead(9)==HIGH&&digitalRead(10)==LOW&&digitalRead(11)==LOW&&digitalRead(12)==HIGH&&digitalRead(13)==LOW)
  {
    digitalWrite(3,LOW);
    digitalWrite(4,HIGH);
    digitalWrite(5,HIGH);
    digitalWrite(6,LOW);
    digitalWrite(7,HIGH);
    delay(10);
  }
  else if (digitalRead(9)==HIGH&&digitalRead(10)==LOW&&digitalRead(11)==LOW&&digitalRead(12)==LOW&&digitalRead(13)==HIGH)
  {
    digitalWrite(3,LOW);
    digitalWrite(4,HIGH);
    digitalWrite(5,HIGH);
    digitalWrite(6,HIGH);
    digitalWrite(7,LOW);
    delay(10);
  }
  else if (digitalRead(9)==HIGH&&digitalRead(10)==LOW&&digitalRead(11)==LOW&&digitalRead(12)==HIGH&&digitalRead(13)==HIGH)
  {
    digitalWrite(3,LOW);
    digitalWrite(4,HIGH);
    digitalWrite(5,HIGH);
    digitalWrite(6,LOW);
    digitalWrite(7,LOW);
    delay(10);
  }
  else if (digitalRead(9)==HIGH&&digitalRead(10)==LOW&&digitalRead(11)==HIGH&&digitalRead(12)==LOW&&digitalRead(13)==LOW)
  {
    digitalWrite(3,LOW);
    digitalWrite(4,HIGH);
    digitalWrite(5,LOW);
    digitalWrite(6,HIGH);
    digitalWrite(7,HIGH);
    delay(10);
  }
  else if (digitalRead(9)==HIGH&&digitalRead(10)==LOW&&digitalRead(11)==HIGH&&digitalRead(12)==HIGH&&digitalRead(13)==LOW)
  {
    digitalWrite(3,LOW);
    digitalWrite(4,HIGH);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    digitalWrite(7,HIGH);
    delay(10);
  }
  else if (digitalRead(9)==HIGH&&digitalRead(10)==LOW&&digitalRead(11)==HIGH&&digitalRead(12)==LOW&&digitalRead(13)==HIGH)
  {
    digitalWrite(3,LOW);
    digitalWrite(4,HIGH);
    digitalWrite(5,LOW);
    digitalWrite(6,HIGH);
    digitalWrite(7,LOW);
    delay(10);
  }
  else if (digitalRead(9)==HIGH&&digitalRead(10)==LOW&&digitalRead(11)==HIGH&&digitalRead(12)==HIGH&&digitalRead(13)==HIGH)
  {
    digitalWrite(3,LOW);
    digitalWrite(4,HIGH);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    digitalWrite(7,LOW);
    delay(10);
  }
  else if (digitalRead(9)==HIGH&&digitalRead(10)==HIGH&&digitalRead(11)==LOW&&digitalRead(12)==LOW&&digitalRead(13)==LOW)
  {
    digitalWrite(3,LOW);
    digitalWrite(4,LOW);
    digitalWrite(5,HIGH);
    digitalWrite(6,HIGH);
    digitalWrite(7,HIGH);
    delay(10);
  }
  else if (digitalRead(9)==HIGH&&digitalRead(10)==HIGH&&digitalRead(11)==LOW&&digitalRead(12)==HIGH&&digitalRead(13)==LOW)
  {
    digitalWrite(3,LOW);
    digitalWrite(4,LOW);
    digitalWrite(5,HIGH);
    digitalWrite(6,LOW);
    digitalWrite(7,HIGH);
    delay(10);
  }
  else if (digitalRead(9)==HIGH&&digitalRead(10)==HIGH&&digitalRead(11)==LOW&&digitalRead(12)==LOW&&digitalRead(13)==HIGH)
  {
    digitalWrite(3,LOW);
    digitalWrite(4,LOW);
    digitalWrite(5,HIGH);
    digitalWrite(6,HIGH);
    digitalWrite(7,LOW);
    delay(10);
  }
  else if (digitalRead(9)==HIGH&&digitalRead(10)==HIGH&&digitalRead(11)==LOW&&digitalRead(12)==HIGH&&digitalRead(13)==HIGH)
  {
    digitalWrite(3,LOW);
    digitalWrite(4,LOW);
    digitalWrite(5,HIGH);
    digitalWrite(6,LOW);
    digitalWrite(7,LOW);
    delay(10);
  }
  else if (digitalRead(9)==HIGH&&digitalRead(10)==HIGH&&digitalRead(11)==HIGH&&digitalRead(12)==LOW&&digitalRead(13)==LOW)
  {
    digitalWrite(3,LOW);
    digitalWrite(4,LOW);
    digitalWrite(5,LOW);
    digitalWrite(6,HIGH);
    digitalWrite(7,HIGH);
    delay(10);
  }
  else if (digitalRead(9)==HIGH&&digitalRead(10)==HIGH&&digitalRead(11)==HIGH&&digitalRead(12)==HIGH&&digitalRead(13)==LOW)
  {
    digitalWrite(3,LOW);
    digitalWrite(4,LOW);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    digitalWrite(7,HIGH);
    delay(10);
  }
  else if (digitalRead(9)==HIGH&&digitalRead(10)==HIGH&&digitalRead(11)==HIGH&&digitalRead(12)==LOW&&digitalRead(13)==HIGH)
  {
    digitalWrite(3,LOW);
    digitalWrite(4,LOW);
    digitalWrite(5,LOW);
    digitalWrite(6,HIGH);
    digitalWrite(7,LOW);
    delay(10);
  }
  else 
  {
    digitalWrite(3,LOW);
    digitalWrite(4,LOW);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    digitalWrite(7,LOW);
    delay(10);
  }
}
