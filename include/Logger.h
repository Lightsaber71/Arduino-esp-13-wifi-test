/**
 * @file Logger.h
 * @brief Declares the Logger class.
 *
 * Provides a simple class for printing a customizable
 * greeting to the Arduino serial monitor.
 *
 * @author Noah Geiger
 * @date 2026-11-23
 */


#pragma once

#include <Arduino.h>

class Logger {

public:
    Logger();
    void begin();
    void info(const String& message);
};