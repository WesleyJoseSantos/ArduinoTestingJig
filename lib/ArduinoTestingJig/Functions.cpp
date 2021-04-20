/**
 * @file Functions.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-04-09
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "Functions.h"

void pinModeTest(uint8_t pin, uint8_t mode){
    pinMode(pin, mode);
    if (TestingJig.enabled())
    {
        Serial.println("pinModeTest");
    }
}

void digitalReadTest(uint8_t pin){
    digitalRead(pin);
    if (TestingJig.enabled())
    {
        Serial.println("digitalReadTest");
    }
}

void digitalWriteTest(uint8_t pin, uint8_t val){
    digitalWrite(pin, val);
    if (TestingJig.enabled())
    {
        Serial.println("digitalWriteTest");
    }
}

void analogReadTest(uint8_t pin){
    analogRead(pin);
    if (TestingJig.enabled())
    {
        Serial.println("analogReadTest");
    }
}

#ifndef ESP32
void analogWriteTest(uint8_t pin, uint8_t val){
    if (TestingJig.enabled())
    {
        Serial.println("pinModeTest");
    }
}
#endif

void delayTest(unsigned long ms){
    delay(ms);
    if (TestingJig.enabled())
    {
        Serial.println("delayTest");
    }
}