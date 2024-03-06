//game engine

#include "Game.h"
#include <Adafruit_GFX.h>
#include <Waveshare_ILI9486.h>
#include "BLEconfig.h"

//#include <TFT_ILI9163C.h>
//This Game Engine is supposed to help create games easily 

//Defines for TFT
#define __CS 10
#define __DC 9

//Create a TFT object
	Waveshare_ILI9486 tft; // change your setting for SPI interface in the library Waveshare_ILI9486.h .cpp
  //TFT_ILI9163C tft = TFT_ILI9163C(__CS, __DC);

//Create a Game object
Game game(&tft, A2, A3, 7, 6);

void setup()
{
   if (!Serial) Serial.begin(115200);
   delay(2000); Serial.println("Serial initialized");
   if (BLEinit()) Serial.println("BLE initialized"); 
   
     //for random
     randomSeed(analogRead(A1));randomSeed(analogRead(A1));randomSeed(analogRead(A3));
     game.init();
     pinMode(A0, INPUT);
     pinMode(A1, INPUT);
     pinMode(7, INPUT_PULLUP);
     pinMode(6, OUTPUT);
}
void loop()
{
     game.run(60); //run the on an interval of 10;
}
