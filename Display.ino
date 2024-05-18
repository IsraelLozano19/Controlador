int EA = 2;
int EB = 3;
int EC = 4;
int ED = 5;

int A = 6;
int B = 7;
int C = 8;
int D = 9;
int E = 10;
int F = 11;
int G = 12;

void setup() {
  pinMode(EA, INPUT);
  pinMode(EB, INPUT);
  pinMode(EC, INPUT);
  pinMode(ED, INPUT);

  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(C, OUTPUT);
  pinMode(D, OUTPUT);
  pinMode(E, OUTPUT);
  pinMode(F, OUTPUT);
  pinMode(G, OUTPUT);
}

void loop() {
  
  //0
  if(!digitalRead(ED) && !digitalRead(EC) && !digitalRead(EB) && !digitalRead(EA)){
    digitalWrite(A, HIGH);digitalWrite(B, HIGH);digitalWrite(D, HIGH);
    digitalWrite(E, HIGH);digitalWrite(F, HIGH);digitalWrite(G, HIGH);
  }else{
    digitalWrite(A, LOW);digitalWrite(B, LOW);digitalWrite(C, LOW);digitalWrite(D, LOW);
    digitalWrite(E, LOW);digitalWrite(F, LOW);digitalWrite(G, LOW);
  }
  
  //1
  if(!digitalRead(ED) && !digitalRead(EC) && !digitalRead(EB) && digitalRead(EA)){
    digitalWrite(B, HIGH);digitalWrite(E, HIGH);
  }else{
    digitalWrite(A, LOW);digitalWrite(B, LOW);digitalWrite(C, LOW);digitalWrite(D, LOW);
    digitalWrite(E, LOW);digitalWrite(F, LOW);digitalWrite(G, LOW);
  }
  //2
  if(!digitalRead(ED) && !digitalRead(EC) && digitalRead(EB) && !digitalRead(EA)){
    digitalWrite(A, HIGH);digitalWrite(B, HIGH);digitalWrite(C, HIGH);
    digitalWrite(F, HIGH);digitalWrite(G, HIGH);
  }else{
    digitalWrite(A, LOW);digitalWrite(B, LOW);digitalWrite(C, LOW);digitalWrite(D, LOW);
    digitalWrite(E, LOW);digitalWrite(F, LOW);digitalWrite(G, LOW);
  }
  //3
  if(!digitalRead(ED) && !digitalRead(EC) && digitalRead(EB) && digitalRead(EA)){
    digitalWrite(A, HIGH);digitalWrite(B, HIGH);digitalWrite(C, HIGH);
    digitalWrite(E, HIGH);digitalWrite(F, HIGH);
  }else{
    digitalWrite(A, LOW);digitalWrite(B, LOW);digitalWrite(C, LOW);digitalWrite(D, LOW);
    digitalWrite(E, LOW);digitalWrite(F, LOW);digitalWrite(G, LOW);
  }
  //4
  if(!digitalRead(ED) && digitalRead(EC) && !digitalRead(EB) && !digitalRead(EA)){
    digitalWrite(B, HIGH);digitalWrite(C, HIGH);
    digitalWrite(D, HIGH);digitalWrite(E, HIGH);
  }else{
    digitalWrite(A, LOW);digitalWrite(B, LOW);digitalWrite(C, LOW);digitalWrite(D, LOW);
    digitalWrite(E, LOW);digitalWrite(F, LOW);digitalWrite(G, LOW);
  }
  //5
  if(!digitalRead(ED) && digitalRead(EC) && !digitalRead(EB) && digitalRead(EA)){
    digitalWrite(A, HIGH);digitalWrite(D, HIGH); digitalWrite(C, HIGH);
    digitalWrite(E, HIGH);digitalWrite(F, HIGH);
  }else{
    digitalWrite(A, LOW);digitalWrite(B, LOW);digitalWrite(C, LOW);digitalWrite(D, LOW);
    digitalWrite(E, LOW);digitalWrite(F, LOW);digitalWrite(G, LOW);
  }
  //6
  if(!digitalRead(ED) && digitalRead(EC) && digitalRead(EB) && !digitalRead(EA)){
    digitalWrite(A, HIGH);digitalWrite(D, HIGH); digitalWrite(C, HIGH);
    digitalWrite(E, HIGH);digitalWrite(F, HIGH);digitalWrite(G, HIGH);
  }else{
    digitalWrite(A, LOW);digitalWrite(B, LOW);digitalWrite(C, LOW);digitalWrite(D, LOW);
    digitalWrite(E, LOW);digitalWrite(F, LOW);digitalWrite(G, LOW);
  }
  //7
  if(!digitalRead(ED) && digitalRead(EC) && digitalRead(EB) && digitalRead(EA)){
    digitalWrite(A, HIGH);digitalWrite(B, HIGH);digitalWrite(E, HIGH);
  }else{
    digitalWrite(A, LOW);digitalWrite(B, LOW);digitalWrite(C, LOW);digitalWrite(D, LOW);
    digitalWrite(E, LOW);digitalWrite(F, LOW);digitalWrite(G, LOW);
  }
  //8
  if(digitalRead(ED) && !digitalRead(EC) && !digitalRead(EB) && !digitalRead(EA)){
  digitalWrite(A, HIGH);digitalWrite(B, HIGH);digitalWrite(C, HIGH);digitalWrite(D, HIGH);
    digitalWrite(E, HIGH);digitalWrite(F, HIGH);digitalWrite(G, HIGH);
  }else{
    digitalWrite(A, LOW);digitalWrite(B, LOW);digitalWrite(C, LOW);digitalWrite(D, LOW);
    digitalWrite(E, LOW);digitalWrite(F, LOW);digitalWrite(G, LOW);
  }
  //9
  if(digitalRead(ED) && !digitalRead(EC) && !digitalRead(EB) && digitalRead(EA)){
    digitalWrite(A, HIGH);digitalWrite(B, HIGH);digitalWrite(C, HIGH);
    digitalWrite(D, HIGH);digitalWrite(E, HIGH);digitalWrite(F, HIGH);
  }else{
    digitalWrite(A, LOW);digitalWrite(B, LOW);digitalWrite(C, LOW);digitalWrite(D, LOW);
    digitalWrite(E, LOW);digitalWrite(F, LOW);digitalWrite(G, LOW);
  }
  //A
  if(digitalRead(ED) && !digitalRead(EC) && digitalRead(EB) && !digitalRead(EA)){
  digitalWrite(A, HIGH);digitalWrite(B, HIGH);digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);digitalWrite(E, HIGH);digitalWrite(G, HIGH);
  }else{
    digitalWrite(A, LOW);digitalWrite(B, LOW);digitalWrite(C, LOW);digitalWrite(D, LOW);
    digitalWrite(E, LOW);digitalWrite(F, LOW);digitalWrite(G, LOW);
  }
  //B
  if(digitalRead(ED) && !digitalRead(EC) && digitalRead(EB) && digitalRead(EA)){
  digitalWrite(C, HIGH);digitalWrite(D, HIGH);digitalWrite(E, HIGH);
  digitalWrite(F, HIGH);digitalWrite(G, HIGH);
  }else{
    digitalWrite(A, LOW);digitalWrite(B, LOW);digitalWrite(C, LOW);digitalWrite(D, LOW);
    digitalWrite(E, LOW);digitalWrite(F, LOW);digitalWrite(G, LOW);
  }
  //C
  if(digitalRead(ED) && digitalRead(EC) && !digitalRead(EB) && !digitalRead(EA)){
  digitalWrite(A, HIGH);digitalWrite(D, HIGH);
  digitalWrite(F, HIGH);digitalWrite(G, HIGH);
  }else{
    digitalWrite(A, LOW);digitalWrite(B, LOW);digitalWrite(C, LOW);digitalWrite(D, LOW);
    digitalWrite(E, LOW);digitalWrite(F, LOW);digitalWrite(G, LOW);
  }
  //D
  if(digitalRead(ED) && digitalRead(EC) && !digitalRead(EB) && digitalRead(EA)){
  digitalWrite(B, HIGH);digitalWrite(C, HIGH);digitalWrite(E, HIGH);
  digitalWrite(F, HIGH);digitalWrite(G, HIGH);
  }else{
    digitalWrite(A, LOW);digitalWrite(B, LOW);digitalWrite(C, LOW);digitalWrite(D, LOW);
    digitalWrite(E, LOW);digitalWrite(F, LOW);digitalWrite(G, LOW);
  }
  //E
  if(digitalRead(ED) && digitalRead(EC) && digitalRead(EB) && !digitalRead(EA)){
    digitalWrite(A, HIGH);digitalWrite(C, HIGH);digitalWrite(D, HIGH);
    digitalWrite(F, HIGH);digitalWrite(G, HIGH);
  }else{
    digitalWrite(A, LOW);digitalWrite(B, LOW);digitalWrite(C, LOW);digitalWrite(D, LOW);
    digitalWrite(E, LOW);digitalWrite(F, LOW);digitalWrite(G, LOW);
  }
  //F
  if(digitalRead(ED) && digitalRead(EC) && digitalRead(EB) && digitalRead(EA)){
    digitalWrite(A, HIGH);digitalWrite(C, HIGH);
    digitalWrite(D, HIGH);digitalWrite(G, HIGH);
  }else{
    digitalWrite(A, LOW);digitalWrite(B, LOW);digitalWrite(C, LOW);digitalWrite(D, LOW);
    digitalWrite(E, LOW);digitalWrite(F, LOW);digitalWrite(G, LOW);
  }
}
