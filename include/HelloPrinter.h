/**
 * @file HelloPrinter.h
 * @brief Declares the HelloPrinter class.
 *
 * Provides a simple class for printing a customizable
 * greeting to the Arduino serial monitor.
 *
 * @author Noah Geiger
 * @date 2026-11-23
 */


#pragma once

#include <Arduino.h>

class HelloPrinter {

private:
    String message;

public:
    HelloPrinter(String message = "Hello");

    void print_hello();
};