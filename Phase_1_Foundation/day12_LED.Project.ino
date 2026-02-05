Simple LED project:-
--This LED work is performed by a simple script.
--LED turns on and off by pressing button.
--The equipment it required was as following:
.LED
.Arduino Uno R3
.A Button
.220ohm Resistor
.Power battery
--The code used for the proect was following:
const int buttonPin = 2;  
const int ledPin = 9;    
void setup() {
  pinMode(buttonPin, INPUT_PULLUP);
  pinMode(ledPin, OUTPUT);          
}

void loop() {
  int buttonState = digitalRead(buttonPin); 

  if (buttonState == LOW) {   
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW); 
  }
}
--This project defines the all i did and learnt in Phase 1 of my Robotics Journey.