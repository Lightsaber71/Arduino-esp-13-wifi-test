/**
 * @file HelloPrinter.cpp
 * @brief Defines functionality HelloPrinter class.
 *
 * Provides a simple class for printing a customizable
 * greeting to the Arduino serial monitor.
 *
 * @author Noah Geiger
 * @date 2026-11-23
 */

#include <Arduino.h>

class HelloPrinter {
    
    private:
        String message;

    public:
        HelloPrinter(String message = "Hello") 
            : message(message) {
        }

        bool print_hello() {
            Serial.println(message);
            return true;
        }
};