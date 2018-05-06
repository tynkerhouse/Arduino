/*
  Blink

  Turns 8 LED on and off according to different patterns.

  Tynkerhouse.io
  
*/

int delayLed = 500;
int delayPattern = 1000;

int lowPinNumber = 2;
int highPinNumber = 8;

// a = 2
// b = 8
// c = 3
// d = 4
// e = 5
// f = 7
// g = 6

void displayOne() {
  digitalWrite(2, LOW);
  digitalWrite(3, HIGH);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, HIGH);
}

void displayTwo() {
  digitalWrite(2, HIGH);
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, LOW);
  digitalWrite(8, HIGH);  
}

void displayThree() {
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH);
  digitalWrite(7, LOW);
  digitalWrite(8, HIGH);  
}

void displayFour() {
  digitalWrite(2, LOW);
  digitalWrite(3, HIGH);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);  
}

// a = 2
// b = 8
// c = 3
// d = 4
// e = 5
// f = 7
// g = 6


void displayFive() {
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(8, LOW);  
}


void displaySix() {
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(8, LOW);  
}

void displaySeven() {
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, HIGH);
}

void displayEight() {
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);  
}

void displayNine() {
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);  
}

void displayZero() {
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, LOW);
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);  
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
  displayOne();
  delay(delayPattern);
  displayTwo();
  delay(delayPattern);
  displayThree();
  delay(delayPattern);
  displayFour();
  delay(delayPattern);
  displayFive();
  delay(delayPattern);
  displaySix();
  delay(delayPattern);
  displaySeven();
  delay(delayPattern);
  displayEight();
  delay(delayPattern);
  displayNine();
  delay(delayPattern);
  displayZero();
  delay(delayPattern);

}
