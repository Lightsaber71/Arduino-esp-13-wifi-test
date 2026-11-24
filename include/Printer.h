/**
 * @file Printer.h
 * @brief Declares the Printer class.
 *
 * Provides a simple class for printing a customizable
 * greeting to the Arduino serial monitor.
 *
 * @author Noah Geiger
 * @date 2026-11-23
 */


#pragma once

#include <Arduino.h>

class Printer {

private:
    String message;

public:
    Printer();
    void set_message(const String& message);
    void print();

};