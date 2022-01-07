
void setup()
{
  pinMode(10, OUTPUT);
}

void loop()
{
  digitalWrite(13, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(13, LOW);
  digitalWrite(12, HIGH);
  delay(1000);
  digitalWrite(12,LOW);
  digitalWrite(11,HIGH);
  delay(1000);
  digitalWrite(11,LOW);
  digitalWrite(10,HIGH);
  delay(1000);
  digitalWrite(10,LOW);
}
