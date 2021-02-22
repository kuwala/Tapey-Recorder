#include <SPI.h>
#include <SSD_13XX.h>

/*
Teensy3.x and Arduino's
You are using 4 wire SPI here, so:
MOSI:  11//Teensy3.x/Arduino UNO (for MEGA/DUE refere to arduino site)
MISO:  12//Teensy3.x/Arduino UNO (for MEGA/DUE refere to arduino site)
SCK:   13//Teensy3.x/Arduino UNO (for MEGA/DUE refere to arduino site)
ESP8266-----------------------------------
Use:
#define __CS  16  //(D0)
#define __DC  5   //(D1)
#define __RST 4   //(D2)

SCLK:D5
MOSI:D7
*/
//Use SPI1
#define __CS1 	33
#define __DC 	30
#define __RES 29
#define __MOSI 0
#define __SCLK 32

  //SSD_13XX::SSD_13XX(const uint8_t cspin,const uint8_t dcpin,const uint8_t rstpin,const uint8_t mosi,const uint8_t sclk)
/*
Teensy 3.x can use: 2,6,10,15,20,21,22,23
Arduino's 8 bit: any
DUE: check arduino site
If you do not use reset, tie it to +3V3
*/

uint8_t errorCode = 0;

SSD_13XX tft = SSD_13XX(__CS1, __DC, __RES, __MOSI, __SCLK);

void setup() {
	SPI.setMOSI(0);
  //SPI.setMISO();
  SPI.setSCK(32);
  SPI.begin();
	Serial.begin(38400);
	long unsigned debug_start = millis();
	while (!Serial && ((millis() - debug_start) <= 5000));
	Serial.println("serial ok, testing lib...");
	tft.begin();
	//the following it's mainly for Teensy
	//it will help you to understand if you have choosed the
	//wrong combination of pins!
	errorCode = tft.getErrorCode();
	if (errorCode != 0) {
		Serial.print("Init error! ");
		if (bitRead(errorCode, 0)) Serial.print("MOSI or SCLK pin mismach!\n");
		if (bitRead(errorCode, 1)) Serial.print("CS or DC pin mismach!\n");
	}
	else {
		tft.print("Ready!");
	}
}


void loop(void) {

}
