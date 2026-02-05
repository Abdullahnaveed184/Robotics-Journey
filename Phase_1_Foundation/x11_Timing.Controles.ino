Time dealation and time counting:-
--We already know about the delay(1000).
--It means Arduino will do nothing for 1 sec.
--But this code will fix it:
const int ledPin = 13;

unsigned long previousTime = 0;
const int interval = 1000;

bool ledState = false;

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  unsigned long currentTime = millis();

  if (currentTime - previousTime >= interval) {
    previousTime = currentTime;

    ledState = !ledState;
    digitalWrite(ledPin, ledState);
  }
}
--unsigned long will record time as controller starts.

--Timing help a lot in robot moving, turning and performing precise work.
