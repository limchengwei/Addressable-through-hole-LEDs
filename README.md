# Addressable-through-hole-LEDs

Thank you [JLCPCB](https://jlcpcb.com/RAT) for sponsoring this project.

The Addressable through hole LEDs can change the colors of the PL9823 addressable RGB LEDs by varying the HSV and the RGB parameters.

HSV stands for Hue, Saturation, Value.

Hue is the color of the light from red to magenta.

Saturation is the grayness of the color, lower means more gray, higher means more towards that color.

Value is the brightness of the color, lower means darker, higher means brighter.

There are 2 sets of 8 LEDs on each side of the PCB. Each side is controlled by either only HSV or RGB parameter.

We are using the FastLED Arduino library for the Arduino Nano board. The HSV and the RGB vary from 0 to 255 for each parameter. The 3362P potentiometers are used to tune the parameters.

It is highly recommended to use an external power supply such as USB C board and add in a capacitor parallel to the power supply to the 2 power supply copper pads.

Things we need:

[JLCPCB](https://jlcpcb.com/RAT) Customized PCB                               * 1

Arduino Nano R3                                     * 1

PL9823 RGB Through hole LED 8mm                     * 32

Single Turn Potentiometer- 200 ohms                 * 6

Female Header 15 Position 1 Row (2.54mm)            * 2

DIP Switch 2 Pin Through Hole                       * 1

Through Hole Resistor, 51 ohm                       * 32

Capacitor 100 nF                                    * 32

Soldering iron (generic)                            * 1

Solder Wire, Lead Free

Please visit https://www.hackster.io/limchengwei/addressable-through-hole-leds-51fb19 for more information about the project.

Thank you [JLCPCB](https://jlcpcb.com/RAT) again for sponsoring this project and please order your PCB at [https://jlcpcb.com/RAT](https://jlcpcb.com/RAT)
