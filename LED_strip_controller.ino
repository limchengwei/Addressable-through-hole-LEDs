#include <FastLED.h>

#define NUM_STRIPS 2
#define NUM_LEDS_PER_STRIP 16
CRGB leds[NUM_STRIPS][NUM_LEDS_PER_STRIP];

#define Pot_H A0
#define Pot_S A1
#define Pot_V A2
#define Pot_R A3
#define Pot_G A4
#define Pot_B A5

int i, j;

void setup()
{
  pinMode (Pot_H, INPUT);
  pinMode (Pot_S, INPUT);
  pinMode (Pot_V, INPUT);
  pinMode (Pot_R, INPUT);
  pinMode (Pot_G, INPUT);
  pinMode (Pot_B, INPUT);
  FastLED.addLeds<PL9823, 2, RGB>(leds[0], NUM_LEDS_PER_STRIP);   //GRB
  FastLED.addLeds<PL9823, 3, RGB>(leds[1], NUM_LEDS_PER_STRIP);   //GRB
}

void loop()
{
  int Pot_H_val = map(analogRead(Pot_H), 0, 1023, 0, 255);
  int Pot_S_val = map(analogRead(Pot_S), 0, 1023, 0, 255);
  int Pot_V_val = map(analogRead(Pot_V), 0, 1023, 0, 255);
  
  int Pot_R_val = map(analogRead(Pot_R), 0, 1023, 0, 255);
  int Pot_G_val = map(analogRead(Pot_G), 0, 1023, 0, 255);
  int Pot_B_val = map(analogRead(Pot_B), 0, 1023, 0, 255);

  for (i=0; i<16; i++)
  {
    leds[0][i] = CHSV(Pot_H_val, Pot_S_val, Pot_V_val);
    FastLED.show();
  }
  for (j=0; j<16; j++)
  {
    leds[1][j] = CRGB(Pot_G_val, Pot_R_val, Pot_B_val);
    FastLED.show();
  }
  delay (10);
}
