/**
 * @file main.cpp
 * @brief Main entry point for project
 *
 * @author Noah Geiger
 * @date 2026-11-23
 */


#include <Arduino.h>
#include "Logger.h"

  Logger logger;

void setup() {
}

void loop() {
  logger.info("Hello");
  delay(1000);
}

