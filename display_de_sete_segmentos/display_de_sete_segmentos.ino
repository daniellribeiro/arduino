void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(6,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  //Numero 1
  digitalWrite(10,HIGH);
  digitalWrite(7,HIGH);
  delay(2000);
  
  //Numero 2
  digitalWrite(7,LOW);
  digitalWrite(9, HIGH);
  digitalWrite(13,HIGH);
  digitalWrite(11,HIGH);
  digitalWrite(8, HIGH);
  delay(2000);

  //Numero 3
  digitalWrite(9,LOW);
  digitalWrite(7,HIGH);
  delay(2000);

  //Numero 4
  digitalWrite(8, LOW);
  digitalWrite(11,LOW);
  digitalWrite(12, HIGH);
  delay(2000);

  //numero 5
  digitalWrite(10,LOW);
  digitalWrite(11,HIGH);
  digitalWrite(8,HIGH);
  delay(2000);

  //numero 6
  digitalWrite(9,HIGH);
  delay(2000);

  //numero 7
  digitalWrite(13,LOW);
  digitalWrite(12,LOW);
  digitalWrite(9,LOW);
  digitalWrite(8,LOW);
  digitalWrite(10,HIGH);
  delay(2000);

  //numero 8
  digitalWrite(13,HIGH);
  digitalWrite(12,HIGH);
  digitalWrite(9,HIGH);
  digitalWrite(8,HIGH);
  delay(2000);

  //numero 9
  digitalWrite(9,LOW);
  digitalWrite(8,LOW);
  delay(2000);

  //acende tudo
  digitalWrite(9,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(6,HIGH);
  delay(2000);

  //apaga tudo
  digitalWrite(13,LOW);
  digitalWrite(12,LOW);
  digitalWrite(11,LOW);
  digitalWrite(10,LOW);
  digitalWrite(9,LOW);
  digitalWrite(8,LOW);
  digitalWrite(7,LOW);
  digitalWrite(6,LOW);
  }
