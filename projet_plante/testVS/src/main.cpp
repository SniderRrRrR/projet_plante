#include <Arduino.h>
#include <ESP8266WiFi.h>
#include "projet_plante.h"

const char *ssid = "Tristan";
const char *password = "244466666";

const int CapteurPin = A0;
const int Ledvert = D0;
const int Ledrouge = D1;

void setup() {
  Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
}

