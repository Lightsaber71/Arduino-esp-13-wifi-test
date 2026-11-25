/**
 * @file Logger.cpp
 * @brief Implements Logger class.
 *
 * Provides a simple class for printing a customizable
 * greeting to the Arduino serial monitor.
 *
 * @author Noah Geiger
 * @date 2026-11-23
 */

#include <Arduino.h>
#include "Logger.h"

Logger::Logger() {
}

void Logger::begin() {
    delay(1000);
    Serial.begin(115200);
    delay(1000);
    Serial.println("Serial Logger successfully initialized...");
}

void Logger::info(const String& message) {
    Serial.println(message);
}