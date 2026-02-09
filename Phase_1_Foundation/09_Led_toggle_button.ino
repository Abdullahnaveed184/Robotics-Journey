Led Toggling:-
--As the word is showing that led blinks.
--In this process button becomes only a source of message not control.
--If button press=1 then led=on and press=2 then led=off.
--It is done by storing it in the Arduino memory, as;
const int buttonPin = 7;
const int ledPin = 13;

bool ledState = false;

void setup() {
  pinMode(buttonPin, INPUT_PULLUP);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  if (digitalRead(buttonPin) == LOW) {   // button pressed
    ledState = !ledState;                
    if (ledState) {
      digitalWrite(ledPin, HIGH);
    } else {
      digitalWrite(ledPin, LOW);
    }

    delay(300);    }
}
--This is the same way in which we change robot commands, in a single loop. 
