Motor drivers are without any doubt a very helpful too. But without instructions from Arduino it can only spin motor soullessly.
My first ever experiment to spin the motor two ways was as follow:-
--Equipment used are as follow:
.Arduino R3
.Motor driver
.Motor
.Jumper wires
--The connections made through Jumper wire was as follow:
.Battery + → Motor Driver 12V / VCC
 Battery – → Motor Driver GND
.Motor Driver GND → Arduino GND
.Motor wires → Motor Driver OUT1 and OUT2
.Driver Pin	Connect To Arduino
 IN1	        Pin 8
 IN2	        Pin 7
 ENA	        Pin 9 (PWM pin)
--C++ code entered in the Arduino was simple:
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
--What this code is more simpler than the code itself. It connects and disconnects wire as in given table:
| Command                 | Result               |
| ----------------------- | -------------------- |
| IN1 HIGH, IN2 LOW       | Motor spins forward  |
| IN1 LOW, IN2 HIGH       | Motor spins backward |
| analogWrite(ENA, value) | Controls speed       |
| Both LOW                | Motor stops          |


--This first ever two way motor spinning gave me courage that if a motor can spin two ways
then any project, system and connection can performe  in this way.
