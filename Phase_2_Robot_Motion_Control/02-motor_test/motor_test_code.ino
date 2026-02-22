

 const int IN1 = 8;
const int IN2 = 7;
const int ENA = 9;

void setup() {
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(ENA, OUTPUT);
}

void loop() {
  
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  analogWrite(ENA, 150); // Speed (0–255)
  delay(3000);

  
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  delay(2000);


  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  analogWrite(ENA, 200);
  delay(3000);


  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  delay(3000);
}
