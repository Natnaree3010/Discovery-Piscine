int bt = A5;
int bts = 0;
int led1 = A2;
int led2 = A4;

void setup() {
  Serial.begin(9600);
  pinMode(led1, OUTPUT); 
  pinMode(led2, OUTPUT); 
  pinMode(bt, INPUT); 

}

void loop() {
 bts = digitalRead(bt);

 Serial.println(bts);
 if(bts == HIGH){
  digitalWrite(led1, HIGH);
 }else if (bts == LOW){
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  delay(1000);
  digitalWrite(led2, LOW);
  delay(2000);
  digitalWrite(led1, LOW);
  digitalWrite(led2, HIGH);
  delay(1000);
  digitalWrite(led2, LOW);
  delay(2000);
  digitalWrite(led2, HIGH);
  delay(1000);
  digitalWrite(led2, LOW);
  delay(2000);
 }
 delay(100);
}

