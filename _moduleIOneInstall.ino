#include <TFT_eSPI.h>
#include <Pangodream_18650_CL.h>
#include <SPI.h>

TFT_eSPI tft = TFT_eSPI();  // Invoke library, pins defined in User_Setup.h

#define ADC_PIN 34
#define CONV_FACTOR 1.8
#define READS 20
Pangodream_18650_CL BL(ADC_PIN, CONV_FACTOR, READS);

#define BUTTON_PIN_BITMASK 0x800000000 // 2^35 in hex

void IRAM_ATTR goToSleep() {
  esp_deep_sleep_start();
}

void setup() {
  Serial.begin(250000);
  tft.init();
  tft.setRotation(0);
  attachInterrupt(0, goToSleep, CHANGE);

  // Set screen Back Light brightness
  pinMode(TFT_BL, OUTPUT);
  ledcSetup(0, 5000, 8); // 0-15, 5000, 8
  ledcAttachPin(TFT_BL, 0); // TFT_BL, 0 - 15
  ledcWrite(0, 80); // 0-15, 0-255 (with 8 bit resolution); 0=totally dark;255=totally shiny
}

void loop() {
  tft.fillScreen(0xf830); // screen color
  tft.setTextColor(TFT_WHITE); // text color
  tft.drawFloat(BL.getBatteryChargeLevel(), 3, 0, 220, 4); // display battery charge level

  // Draw stars and text
  for (int i = 0; i < 4; i++) {
    int x = random(250 - 80; // randomize x coordinate for star position
    int y = random(250 - 80); // randomize y coordinate for star position
    int c = 0xFFE0; // star color :)
    drawStar(x, y, c); // draw star at randomized coordinates
  }

  String text[] = {"have", "a", "happy", "valentines", "day"}; // array of text strings

  // randomize the position of the text within the boundaries of the tft
  for (int i = 0; i < 5; i++) { // change the range to add more or less starts
    int x = random(tft.width() - 100); // randomize x coordinate 
    int y = random(tft.height() - 24); // randomize y coordinate

    tft.drawString(text[i], x, y, 4); // display text at randomized coordinates
  }

  delay(1000);
}

// From transparent sprite demo example
void drawStar(int x, int y, int star_color) {
  TFT_eSprite img = TFT_eSprite(&tft);
  
  // set up spite depth and fill
  img.setColorDepth(8);
  img.createSprite(70, 80);
  img.fillSprite(TFT_TRANSPARENT);
 
  // draw the triangles for the star
  img.fillTriangle(35, 0, 0, 59, 69, 59, star_color);
  img.fillTriangle(35, 79, 0, 20, 69, 20, star_color);
  img.fillTriangle(35, 7, 6, 56, 63, 56, TFT_TRANSPARENT);
  img.fillTriangle(35, 73, 6, 24, 63, 24, TFT_TRANSPARENT);
  
  img.pushSprite(x, y, TFT_TRANSPARENT); // display sprite at random coordinates!
  img.deleteSprite(); // delete sprite to free memory
}
