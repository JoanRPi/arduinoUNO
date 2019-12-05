//programa HolaMon.ino
//curs 2019-20, 1r CFGS Electromedicina Clínica, Mòdul 09
//PRACTICA 2


void setup() 
{
  pinMode(3, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(A3, OUTPUT);
  pinMode(9, OUTPUT);
}

void loop()
{
allON();
 delay(1000);
allOFF();
 delay(500);         
}

void allON()
{
  digitalWrite(3,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(A3,HIGH);
  digitalWrite(9,HIGH);
}

void allOFF()
{
  digitalWrite(3,LOW);
  digitalWrite(7,LOW);
  digitalWrite(A3,LOW);
  digitalWrite(9,LOW);
}
