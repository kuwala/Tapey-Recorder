# Teensy 3.6 Audio Recorder
Heavily inspired by the OP-Z i try to study
the OP-deZine elegance and style. Along with POs
and OP-1 of course. <3 TE 

## OP-Z info
### Buttons
7 - transport
16 steps
24 keys
4 - project 

51 total Buttons

## Dimentions
H 57.5mm
W 212.5mm 213.5mm 10mm
+ 5mm for volume


## Pins Used
### Audio Shield Used pins

|    Function   |  Pins Used |
|---------------|------------|
| Audio Data    | 9, 11, 13, 22, 23 |
| Audio Control | 18, 19 |
| OLED          | 3, 4 |

## SSD1306 i2c OLED 128x64
Using these includes. Pins 3, 4 are for SCL2 and SDA2, so you have to use
Wire2 as the interface object.
```C
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
```


## MCP23S17 port expander
Use these port exapnders with 
the sumotoy/gpio_MCP23S17 library
on SPI2 so it does not compete with audio Shield
