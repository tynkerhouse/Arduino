/*
  Blink

  Turns 8 LED on and off according to different patterns.

  Tynkerhouse.io
  
*/

int delayLed = 100;
int delayPattern = 500;

int lowPinNumber = 2;
int highPinNumber = 9;

// 
void ThroughPat(){
  for (int ledPin = lowPinNumber; ledPin <= highPinNumber; ledPin++){
    digitalWrite(ledPin, HIGH);   // turn the LED on
    delay(delayLed);              // wait for delay time between LEDs
    digitalWrite(ledPin, LOW);    // turn the LED off
    delay(delayLed);              // wait for delay time between LEDs
  }
}

void ThroughOffPat(){
  for (int ledPin = lowPinNumber; ledPin <= highPinNumber; ledPin++){
    digitalWrite(ledPin, HIGH);
    delay(delayLed);
    digitalWrite(ledPin, LOW);
    delay(delayLed);
  }
  for (int ledPin = lowPinNumber; ledPin <= highPinNumber; ledPin++){
    digitalWrite(ledPin, HIGH);
  }
}

void ThroughOnOffPat(){
  for (int ledPin = lowPinNumber; ledPin <= highPinNumber; ledPin++){
    digitalWrite(ledPin, HIGH);
    delay(delayLed);
    digitalWrite(ledPin, LOW);
    delay(delayLed);
  }
  for (int ledPin = lowPinNumber; ledPin <= highPinNumber; ledPin++){
    digitalWrite(ledPin, HIGH);
  }
  delay(delayPattern);
  for (int ledPin = lowPinNumber; ledPin <= highPinNumber; ledPin++){
    digitalWrite(ledPin, LOW); 
  } 
}

void OnOffPat(){
  for (int ledPin = lowPinNumber; ledPin <= highPinNumber; ledPin++){
    digitalWrite(ledPin, HIGH);
    delay(delayLed);
  }
  for (int ledPin = highPinNumber; ledPin >= lowPinNumber; ledPin--){
    digitalWrite(ledPin, LOW);
    delay(delayLed);
  }
}


// the setup function runs once when you press reset or power the board
void setup() {
  // initialize the pins as output pins
  for (int ledPin = lowPinNumber; ledPin <= highPinNumber; ledPin++){
    pinMode(ledPin, OUTPUT);
  }
  
}

// the loop function runs over and over again forever
void loop() {

  ThroughPat();
  delay(delayPattern);
  ThroughOffPat();
  delay(delayPattern);
  ThroughOnOffPat();
  delay(delayPattern);
  OnOffPat();
}
