
#include <LiquidCrystal.h>

// Define pin numbers for the LCD display
int rs = 12;
int en = 11; 
int d4 = 2;
int d5 = 3;
int d6 = 4;
int d7 = 5;

LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

// Define pin numbers for the ultra sound sensor
const int trigPin = 8;
const int echoPin = 9;

// Travel time of the ultrasound wave
long duration;
// Distance of the object in center-meters
int distanceCm;

void setup() {
  lcd.begin(16,2);
  // Set the cursor to the origin
  lcd.setCursor(0,1);      
  // Display the text
  lcd.print("Distance: "); 

  // Define the pin mode of the ultra-sound sensor
  pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
  pinMode(echoPin, INPUT);  // Sets the echoPin as an Input
}

void loop() {
  
  // Set the trigPin low
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  
  // Set the trigPin high for 10 micro seconds
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  
  // Reads the echoPin, returns the sound wave travel time in microseconds
  // This is a blocking function. It returns only when an echo is detected
  duration = pulseIn(echoPin, HIGH);
  
  // Calculate the distance
  distanceCm= duration*0.034/2*0.4 + distanceCm*0.6;

  lcd.setCursor(9,1);
  lcd.print(distanceCm); 
  lcd.print(" cm ");
  delay(10);
}
