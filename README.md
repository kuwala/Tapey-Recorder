# Tapey-Recorder
xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
[Click here for PCB design](https://easyeda.com/kuwala/teensy-3-6-audio-recorder-b) with mostly smt assembly parts from jlcpcb. 
xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx



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

## MCP23S17 port expander
Use these port exapnders with 
the sumotoy/gpio_MCP23S17 library
on SPI2 so it does not compete with audio Shield
