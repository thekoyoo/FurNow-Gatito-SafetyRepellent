//Thanks for using a FurNow tutorial!
//By Sarim Mumtaz
//Remember to use this project responsibly. It's purpose is for protection from highly dangerous areas, NOT for harming or abusing animals.


#include "esp_camera.h"
const int PIR = 3;                    //pin for the motion sensor (use pin 2 or 3 / any pin that supports external interrupts)
const int buzzer = 11;                //pin for the buzzer; any i/o pin should work
const unsigned int freq = 500;        //the frequency we want for the repelling (set to 12-25kHz after done with testing)
const unsigned long duration = 2000;  //time we want to hold the sound (in milliseconds so multiply the seconds by 1000)
#define BUTTON_PIN_BITMASK(GPIO) (1ULL << GPIO)  // 2 ^ GPIO_NUMBER in hex


void setup() {
  pinMode(PIR, INPUT);
  pinMode(buzzer, OUTPUT);
  esp_sleep_enable_ext1_wakeup(BUTTON_PIN_BITMASK(PIR), ESP_EXT1_WAKEUP_ANY_HIGH); //Setting up the IR sensor to "wake up" the esp32
  Serial.begin(9600);
  Serial.println("Bonjour");
}


void loop() {
  //letting the buzzer run and then waiting until the PIR's "on" time ends
  tone(buzzer, freq, duration);
  while (digitalRead(PIR)) {
  }
  esp_deep_sleep_start();
}







