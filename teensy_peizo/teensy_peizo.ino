#include "notes.h";
int pezoPin = 24;
int butt1Pin = 32;

void setup() {
  // put your setup code here, to run once:
  //pinMode(pezoPin, OUTPUT);
  pinMode(butt1Pin, INPUT_PULLUP);
  
}

void loop() {
  // put your main code here, to run repeatedly:
bootSys();
}



void bootSys() {

  int delayLong = 3000;
  int delayMed = 1000;
  int delayShort = 300;
  //getButtonInput2();
  noTone(pezoPin);
  /*if ( buttonsState2 == BUT_OKAY ) {
   lcd.setCursor(0,0);
   lcd.print(" TURBO !!");
   delay(delayShort);
   delayLong = 300;
   delayMed = 150;
   delayShort = 100;
   } */
   
   
   int x =0;
   for( int i = 300; i < 316; i++) {
     x = (i % 300);
     //lcd.setCursor(x,0);
     //lcd.print("#");
    // lcd.setCursor(x,1);
     //lcd.print("#");
    tone(pezoPin, i );
   delay(32 ); 
     noTone(pezoPin);
     delay(8 +  ((i % 300) * 8)); 
   }
   
 // lcd.clear();
  //lcd.setCursor(0,0);
  //lcd.print(" A R D I U N O ");
  Serial.println(" A R D I U N O ");
  tone(pezoPin, notes[3]); //g
  delay(512);
  noTone(pezoPin);
  //lcd.setCursor(0,1);
  //lcd.print("      ");
  //lcd.write((byte)0);
  //lcd.write(1);
  //lcd.write(2);
  //lcd.write(3);
  //lcd.write(4);

  delay(delayLong - delayMed);
  noTone(pezoPin);
  //lcd.clear();

  //lcd.setCursor(0,0);

  //lcd.print("A R D R E A M O ");
  Serial.println("A R D R E A M O ");
  tone(pezoPin, notes[3]); //g
  delay(256);
  noTone(pezoPin);
  

  delay(delayMed); 

  //lcd.setCursor(0,1);
  //lcd.print("ATmega2560");
  Serial.println("ATmega2560?");
  tone(pezoPin, notes[2]); //g
  delay(256);
  Serial.println("NOPE!");
  noTone(pezoPin);
  
  delay(delayMed);
  Serial.println("MK66FX");
  
  
  //getButtonInput2();
  noTone(pezoPin);
  if ( digitalRead(butt1Pin) == LOW) {
    //lcd.setCursor(0,1);
    //lcd.print(" TURBO !! ");
    delay(1000);
    delayLong = 300;
    delayMed = 150;
    delayShort = 100;
  }
  //lcd.print(" 16Mhz  ");
  
  delay(delayMed);
  Serial.println("32 bit 180 MHz ARM Cortex-M4");

  //lcd.setCursor(0,1);
  //lcd.print(clear16);
  //lcd.setCursor(0,1);
  //lcd.print("SRAM    ");
  delay(delayShort);
  //lcd.print("8KB  ");
  delay(delayMed);

  //lcd.setCursor(0,1);
  //lcd.print(clear16);
  //lcd.setCursor(0,1);
  //lcd.print("EEPROM  ");
  delay(delayShort);
  //lcd.print("4KB  ");
  delay(delayMed);

  //lcd.setCursor(0,1);
  //lcd.print(clear16);
  //lcd.setCursor(0,1);
  //lcd.print("Flash   ");
  delay(delayShort);
  //lcd.print("256KB ");
  delay(delayMed);

  //lcd.setCursor(0,1);
  //lcd.print(clear16);
  //lcd.setCursor(0,1);
  //lcd.print("HD44780 ");
  delay(delayShort);
  //lcd.print("ROM A00 ");
  delay(delayMed);

  //lcd.setCursor(0,1);
  //lcd.print(clear16);
  //lcd.setCursor(0,1);
  byte betaSym = B11100010; // beta symbol
  //lcd.write(betaSym);
  //lcd.print("Danny-BIOS ");
  Serial.println("Danny-BIOS cerca 2014");
  
  tone(pezoPin, notes[2]); //g
  delay(256);
  noTone(pezoPin);
  
  delay(delayShort);
  Serial.println("V7-arpha");
  //lcd.print("V6.8 ");
  delay(delayMed);
  delay(delayMed);


  //lcd.setCursor(0,1);
  //lcd.print(clear16);
  //lcd.setCursor(0,1);
  //lcd.blink();
  //lcd.print("Booting ");
  Serial.print("Booting ");
  
  tone(pezoPin, notes[1]); //g
  delay(256);
  noTone(pezoPin);
  
  delay(delayShort);
  //lcd.print("System ");
  Serial.println("System ");
  
  tone(pezoPin, notes[0]); //g
  delay(256);
  noTone(pezoPin);
  
  delay(delayMed);

  /*
  // draws random symbols from (0,10) - (0,16)
   int nMin = 9;
   int nMax = 14;
   int nPos = 9;
   byte sym = 200;
   byte symMin = 205;
   byte symMax = 244;
   for (int i = 0; i < 36; i++) {
   if (nPos > nMax) { nPos = nMin ; }
   if ( sym > symMax) { sym = symMin; }
   
   nPos+=2;
   sym++;
   lcd.setCursor(nPos,0);
   lcd.write(sym);
   delay(100);
   
   }
   */

  //final delay

  delay(delayLong);
  //lcd.noBlink();
}
