void setup()
{
  for(int i{2}; i <= 9; i++)
  {
    pinMode(i,OUTPUT);
  }
  pinMode(10,INPUT);
}

void loop()
{
  if(digitalRead(10) == LOW)
  {
    resetAll();
    forwardPlusOne();
    backwardMinusOne();
  }
  else if(digitalRead(10) == HIGH)
  {
    setAll();
    forwardPlusOneL();
    backwardMinusOneL();
  }
}

void resetAll()
{
  for(int i{2}; i <= 9; i++)
  {
    digitalWrite(i,LOW);
  }
}

void setAll()
{
  for(int i{2}; i <= 9; i++)
  {
    digitalWrite(i,HIGH);
  }
}

void forwardPlusOne()
{
  for(int i{2}; i <= 9; i++)
  {
    digitalWrite(i,HIGH);
    digitalWrite(i-1,LOW);
    delay(500);
  }
  digitalWrite(9,LOW);
  delay(500);
}

void backwardMinusOne()
{
  for(int i{9}; i >= 2; i--)
  {
    digitalWrite(i,HIGH);
    digitalWrite(i+1,LOW);
    delay(500);
  }
  digitalWrite(2,LOW);
  delay(500);
}

void forwardPlusOneL()
{
  for(int i{2}; i <= 9; i++)
  {
    digitalWrite(i,LOW);
    digitalWrite(i-1,HIGH);
    delay(500);
  }
  digitalWrite(9,HIGH);
  delay(500);
}

void backwardMinusOneL()
{
  for(int i{9}; i >= 2; i--)
  {
    digitalWrite(i,LOW);
    digitalWrite(i+1,HIGH);
    delay(500);
  }
  digitalWrite(2,HIGH);
  delay(500);
}