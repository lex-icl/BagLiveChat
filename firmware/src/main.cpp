#include <SPI.h>
#include <TFT_eSPI.h>
#include <LiquidCrystal_I2C.h>
#include "img.h"

TFT_eSPI tft = TFT_eSPI();
LiquidCrystal_I2C lcd(0x27, 20, 4);

void setup()
{
  Serial.begin(115200);
  tft.init();
  tft.setRotation(3);
  tft.setSwapBytes(true);
  tft.fillScreen(TFT_WHITE);
  delay(1000);
  tft.fillScreen(TFT_BLACK);
  delay(1000);
  tft.pushImage(0, 0, img_width, img_height, img_data);
  lcd.init();
  lcd.begin(20, 4);
  lcd.backlight();
} 

void loop() 
{
  lcd.setCursor(3, 1);
  lcd.print("selamat pagi!!");
  delay(500);
  lcd.setCursor(3, 2);
  lcd.print("selamat malam...");
  delay(500);
  lcd.setCursor(3, 3);
  lcd.print(">:3c");
  delay(500);
  lcd.clear();
}
