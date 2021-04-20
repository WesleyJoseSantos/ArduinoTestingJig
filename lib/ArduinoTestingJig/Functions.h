/**
 * @file Functions.h
 * @author Wesley José Santos
 * @brief 
 * @version 0.1
 * @date 2021-04-09
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef __FUNCTIONS__H__
#define __FUNCTIONS__H__

#include "ArduinoTestingJig.h"
#include "Arduino.h"

enum Functions {
    PIN_MODE,
    DIGITAL_READ,
    DIGITAL_WRITE,
    ANALOG_READ,
    ANALOG_WRITE,
    DELAY
};

void pinModeTest(uint8_t pin, uint8_t mode);
void digitalReadTest(uint8_t pin);
void digitalWriteTest(uint8_t pin, uint8_t val);
void analogReadTest(uint8_t pin);
void analogWriteTest(uint8_t pin, uint8_t val);
void delayTest(unsigned long ms);

#endif  //!__FUNCTIONS__H__