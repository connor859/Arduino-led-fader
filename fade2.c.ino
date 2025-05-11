int Ledpin1=5;
int Ledpin2=3;


void setup() {
  pinMode(Ledpin1, OUTPUT);
  pinMode(Ledpin2, OUTPUT);


}

void loop() {
  for(int fadeValue = 255; fadeValue >=0; fadeValue -= 5)
  {
  analogWrite(Ledpin1, fadeValue);
  delay(20);
  }
for (int fadeValue = 0; fadeValue <= 255; fadeValue += 5){
analogWrite(Ledpin1, fadeValue);
delay(20);
}
for(int fadeValue = 255; fadeValue >=0; fadeValue -= 5)
  {
  analogWrite(Ledpin2, fadeValue);
  delay(50);
  }
for (int fadeValue = 0; fadeValue <= 255; fadeValue += 5){
analogWrite(Ledpin2, fadeValue);
delay(50);
}


}
