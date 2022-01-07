int botao = 0;

void setup()
{
  pinMode(13, INPUT);
  pinMode(3, OUTPUT);
}

void loop()
{
  botao = digitalRead(13);
  if (botao == HIGH) {
    digitalWrite(3, HIGH);
  }else{
    digitalWrite(3, LOW);
  }
  delay(10); // Delay a little bit to improve simulation performance
}
