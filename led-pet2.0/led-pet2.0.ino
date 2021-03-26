#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64

#define SCREEN_ADDRESS 0x3C
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire2,5);

int lumens = 64;
int hurtz = 440;
int shedRate = 2;
float a = 0;
int counter = 0;
void setup() {
    Serial.begin(115200);

    // SSD1306_SWITCHCAPVCC = generate display voltage from 3.3V internally
    if(!display.begin(SSD1306_SWITCHCAPVCC, SCREEN_ADDRESS)) {
        Serial.println(F("SSD1306 allocation failed"));
        for(;;); // Don't proceed, loop forever
    }
    display.clearDisplay();

}

void loop() {
  //display.clearDisplay();
  //display.fillRect(0,0,display.width(),display.height(), SSD1306_BLACK);
  if(random(100) > 70) {
    lumens -= shedRate;
  }
  if (lumens <= 0) {
    //clear
    display.clearDisplay();

    lumens = 64 + random(64);
  }
    for(int i = 0; i < 4 + lumens / 4; i ++ ) {
        for(int j = 0; j < 4 + lumens / 8; j ++ ) {
          int x  = random(i*64);
          int y =  random(j*32);
          int s = 3;
            if(lumens > 32) {
             display.drawRect(x-s,y-s,x+s,y+s, SSD1306_BLACK);
            }
          display.drawPixel(x,y, SSD1306_WHITE);
        }
    }
    if(counter % 2) {
      display.drawRect(0,0,display.width(), display.height(), SSD1306_WHITE);
    } else {
      //display.drawRect(0,0,display.width(), display.height(), SSD1306_BLACK);
  
    }
    if(random(2) > 0) {
      display.fillRect(32,32,2,2, SSD1306_WHITE);
    }
    if(random(4) > 2) {
      display.fillRect(sin(a)*32,16,2,2, SSD1306_WHITE);
    }
    if(random(8) > 6) {
      display.fillRect(16 + cos(a)*64,16,2,2, SSD1306_WHITE);
    }
    if(random(16) > 14) {
      display.fillRect(96 + sin(a)*16,16,2,2, SSD1306_WHITE);
    }

    if(random(32) > 30) {
      display.fillRect(0,0,32,32, SSD1306_BLACK);
    }

    display.fillRect(96 + sin(a)*128,20,2,2, SSD1306_WHITE);
    display.display();
  a+= 0.01;
  counter++;
  if(counter > 255) {
    counter = 0;
  }
}
