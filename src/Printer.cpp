/**
 * @file Printer.cpp
 * @brief Implements Printer class.
 *
 * Provides a simple class for printing a customizable
 * greeting to the Arduino serial monitor.
 *
 * @author Noah Geiger
 * @date 2026-11-23
 */

#include <Arduino.h>
#include "Printer.h"

Printer::Printer() 
    : message("")  {
}

void Printer::set_message(const String& message) {
    this->message = message;
}

void Printer::print() {
    Serial.println(message);
}