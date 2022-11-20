#include <Arduino.h>

#include <Arduino_GFX_Library.h>

#include "Orbitron_50_Bold.h"

#define TFT_SCK    25
#define TFT_MOSI   23
#define TFT_MISO   19
#define TFT_CS     22
#define TFT_DC     21
#define TFT_RESET  33

Arduino_ESP32SPI bus = Arduino_ESP32SPI(TFT_DC, TFT_CS, TFT_SCK, TFT_MOSI, TFT_MISO);
Arduino_ILI9341 display = Arduino_ILI9341(&bus, TFT_RESET);

void setup(void)
{

display.begin();
display.setRotation(3);
//display.getTextBounds()
/* display.fillScreen(BLACK);
//display.setTextSize(2);
display.setFont(&Orbitron_Bold_45);
display.setTextColor(YELLOW);
display.setCursor(20, 50);
display.print("Loading");
display.setCursor(20, 100);
display.print("the sample");
display.setCursor(20, 150);
display.print("into the");
display.setCursor(20, 200);
display.print("cassette"); */
//delay(5000);

}

void loop()
{

display.fillScreen(BLACK);
display.setFont(&Orbitron_Bold_45);
display.setTextColor(YELLOW);
display.setCursor(20, 50);
display.print("Loading");
display.setCursor(20, 100);
display.print("the sample");
display.setCursor(20, 150);
display.print("into the");
display.setCursor(20, 200);
display.print("cassette");
delay(5000);

display.fillScreen(BLACK);
display.setFont(&Orbitron_Bold_45);
display.setTextColor(YELLOW);
display.setCursor(10, 50);
display.print("The sample");
display.setCursor(20, 100);
display.print("is mixed");
display.setCursor(10, 150);
display.print("with pre-");
display.setCursor(10, 200);
display.print("loaded dye");
delay(5000);

display.fillScreen(BLACK);
display.setFont(&Orbitron_Bold_45);
display.setTextColor(YELLOW);
display.setCursor(10, 50);
display.print("Cells will");
display.setCursor(10, 100);
display.print("evenly");
display.setCursor(10, 150);
display.print("be labelled");
display.setCursor(10, 200);
display.print("live or dead");
delay(5000); 

display.fillScreen(BLACK);
display.setFont(&Orbitron_Bold_45);
display.setTextColor(YELLOW);
display.setCursor(10, 40);
display.print("The sample");
display.setCursor(10, 85);
display.print("can now be");
display.setCursor(10, 135);
display.print("measured");
display.setCursor(10, 185);
display.print("in the view-");
display.setCursor(10, 230);
display.print("chamber");
delay(5000);

display.fillScreen(BLUE);
delay(250);
display.fillScreen(BLACK);
display.fillScreen(BLUE);
delay(250);
display.fillScreen(BLACK);
display.fillScreen(GREEN);
delay(250);
display.fillScreen(BLACK);
display.fillScreen(GREEN);
delay(250); 

display.fillScreen(BLACK);
display.setFont(&Orbitron_Bold_45);
display.setTextColor(WHITE);
display.setCursor(10, 40);
display.print("Excited");
display.setCursor(10, 85);
display.print("particles");
display.setCursor(10, 135);
display.print("fluoresce");
display.setCursor(10, 185);
display.setTextColor(RED);
display.print("RED");
display.setTextColor(WHITE);
display.print(" and ");
display.setCursor(10, 230);
display.setTextColor(GREEN);
display.print("GREEN");



delay(5000);

}