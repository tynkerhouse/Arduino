
#include <LiquidCrystal.h>
#include <dhtnew.h>

// Define pin numbers for the LCD display
int rs = 12;
int en = 11; 
int d4 = 2;
int d5 = 3;
int d6 = 4;
int d7 = 5;

// Define signal pins for the sensors
int sigPin1 = 7;
int sigPin2 = 8;

float temperature1;
float temperature2;

// Define LCD cursor positions
int column = 7;
int row1 = 0;
int row2 = 1;

LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
DHTNEW dht1(sigPin1);
DHTNEW dht2(sigPin2);

// Function to read temperature from the sensor
float tempread(DHTNEW& dht){
  dht.read();
  float temp = dht.temperature*9.0/5.0+32.0;
  return temp;
}

// Function to display temperature readings on the LCD
void lcdisplay(int x, int y, LiquidCrystal& lcd, float temp) {
  lcd.setCursor(x,y);
  lcd.print(temp);
  lcd.print(" F");  
}

void setup() {
  lcd.begin(16,2);
  // Set the cursor to 0,0
  lcd.setCursor(0,0);
  // Display the text
  lcd.print("Temp1: ");
  // Set the cursor to 0,1
  lcd.setCursor(0,1);      
  // Display the text
  lcd.print("Temp2: "); 
}

void loop() {

  temperature1 = tempread(dht1);
  lcdisplay(column, row1, lcd, temperature1);

  temperature2 = tempread(dht2);  
  lcdisplay(column, row2, lcd, temperature2);

  //Delay 5 seconds
  delay(5000);

}
