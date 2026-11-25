/**
 * @file main.cpp
 * @brief Main entry point for project
 *
 * @author Noah Geiger
 * @date 2026-11-23
 */


#include <Arduino.h>
#include "Logger.h"

#define WAIT_FOR_SERIAL true

Logger logger;

// Function declarations
void start_serial();

void setup() {
  start_serial();
  Serial1.begin(115200);
}

void loop() {
      // Forward computer commands to ESP8266
    while (Serial.available()) {
        Serial1.write(Serial.read());
    }

    // Forward ESP8266 responses to computer
    while (Serial1.available()) {
        Serial.write(Serial1.read());
    }
  }



void start_serial() {
  Serial.begin(115200);

  if(WAIT_FOR_SERIAL) {
    unsigned long start_time = millis();
    while (!Serial) {
      delay(10);
    }
    float wait_time = (millis()-start_time)/1000.0;
    Serial.println("Waited for " + String(wait_time) + "s");
    Serial.println("Serial communication successfully initialized!");
  }
}

