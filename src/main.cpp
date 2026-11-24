/**
 * @file main.cpp
 * @brief Main entry point for project
 *
 * @author Noah Geiger
 * @date 2026-11-23
 */


#include <Arduino.h>
#include "HelloPrinter.h"

HelloPrinter printer("YOOOOOO");

void setup() {
  // put your setup code here, to run once:
  delay(5000);
  Serial.begin(115200);
  delay(2000);
  Serial.println("Starting...");
  
}

void loop() {
  printer.print_hello();
  delay(1000);
}

