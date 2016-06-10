void setup() {
  // put your setup code here, to run once:4
  pinMode(3, INPUT);
  pinMode(4, INPUT);
  pinMode(5, INPUT);
  pinMode(6, INPUT);
  pinMode(7, INPUT);
  pinMode(14, OUTPUT);
  pinMode(15, OUTPUT);
  pinMode(16, OUTPUT);
  pinMode(17, OUTPUT);
}

void loop() {
  digitalWrite(14, LOW);
  digitalWrite(15, LOW);
  digitalWrite(16, LOW);
  digitalWrite(17, LOW);
  if(digitalRead(3)==1){
    digitalWrite(14, HIGH);
  }else{
    digitalWrite(14, LOW);
  }
  if(digitalRead(4)==1){
    digitalWrite(15, HIGH);
  }else{
    digitalWrite(15, LOW);
  }
  if(digitalRead(5)==1){
    digitalWrite(16, HIGH);
  }else{
    digitalWrite(16, LOW);
  } 
  if(digitalRead(6)==1){
    digitalWrite(17, HIGH);
  }else{
    digitalWrite(17, LOW);
  }
  if(digitalRead(7)==1){
    digitalWrite(14, HIGH);
    digitalWrite(15, HIGH);
    digitalWrite(16, HIGH);
    digitalWrite(17, HIGH);
  }
  
}
