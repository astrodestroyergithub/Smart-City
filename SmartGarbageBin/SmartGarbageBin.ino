const int trig = 3;
const int echo = 2;

const int LEDG = 8;
const int LEDR = 9;

int duration = 0;
int distance = 0;

void setup() 
{
  pinMode(trig , OUTPUT);
  pinMode(echo , INPUT);
  
  pinMode(LEDG , OUTPUT);
  pinMode(LEDR , OUTPUT);

  Serial.begin(9600);
}

void loop()
{
  //Smart garbage bin
  digitalWrite(trig , HIGH);
  delayMicroseconds(1000);
  digitalWrite(trig , LOW);
  
  duration = pulseIn(echo , HIGH);
  distance = (duration/2) / 28.5 ;
  Serial.println(distance);
  
  if ( distance >= 5 )
  {
    digitalWrite(LEDG, HIGH);
  }
  else
  {
    digitalWrite(LEDG, LOW);
  }
  
  if ( distance < 5 )
  {
    digitalWrite(LEDR, HIGH);
  }
  else
  {
    digitalWrite(LEDR, LOW);
  }
}
