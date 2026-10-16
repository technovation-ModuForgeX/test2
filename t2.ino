long distance, thyme;
void setup() {
  pinMode(0, OUTPUT); //trigger
  pinMode(1, INPUT); //echo
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(14, OUTPUT);
  pinMode(15, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
delay(500);
fw();
delay(2000);
p();
delay(100000);
}


void fw() {
  digitalWrite(12, LOW);
  digitalWrite(13, HIGH);
  digitalWrite(14, HIGH);
  digitalWrite(15, LOW);
}
void l() {
  digitalWrite(12, LOW);
  digitalWrite(13, HIGH);
  digitalWrite(14, LOW);
  digitalWrite(15, HIGH);
}
void r() {
  digitalWrite(12, HIGH);
  digitalWrite(13, LOW);
  digitalWrite(14, HIGH);
  digitalWrite(15, LOW);
}
void p() {
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);
  digitalWrite(14, LOW);
  digitalWrite(15, LOW);
}
void bw() {
  digitalWrite(12, HIGH);
  digitalWrite(13, LOW);
  digitalWrite(14, LOW);
  digitalWrite(15, HIGH);
}
