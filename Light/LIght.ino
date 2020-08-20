void setup() {
  // put your setup code here, to run once:
pinMode(15, OUTPUT);
pinMode(14, OUTPUT);
digitalWrite(15, LOW);
digitalWrite(14, LOW);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
if (Serial.available() > 0){
  if(Serial.read() == 't'){
    digitalWrite(14, HIGH);
    digitalWrite(15, LOW);
    delay(4000); 
  }
  else{
    //digitalWrite(1, HIGH);
    digitalWrite(15, HIGH);
    delay(4000);
    digitalWrite(15, LOW);
  }
}
else
{
  digitalWrite(1, LOW);
  digitalWrite(14, LOW);
}
}
