/*
Sufyan Saori
Shield Motor
*/

const int E1 = 5;
const int M1 = 4;
const int E2 = 6;
const int M2 = 7;

void setup() {
  // put your setup code here, to run once:
  pinMode(E1,OUTPUT);
  pinMode(M1,OUTPUT);
  pinMode(E2,OUTPUT);
  pinMode(M2,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
//  maju();
//  delay(1000);
//  mundur();
//  delay(1000);
  kanan();
}

void maju(){
  digitalWrite(M1,LOW);
  digitalWrite(E1,HIGH);
  digitalWrite(M2,LOW);
  digitalWrite(E2,HIGH);
}

void mundur(){
  digitalWrite(M1,HIGH);
  digitalWrite(E1,HIGH);
  digitalWrite(M2,HIGH);
  digitalWrite(E2,HIGH);
}

void kanan(){
  digitalWrite(M1,HIGH);
  digitalWrite(E1,HIGH);
  digitalWrite(M2,LOW);
  analogWrite(E2,150);
}

