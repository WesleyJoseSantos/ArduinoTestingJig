/**
 * @file ArduinoTestingJig.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-04-09
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "ArduinoTestingJig.h"

ArduinoTestingJig::ArduinoTestingJig(){

}

void ArduinoTestingJig::begin(){
    this->enable = true;
}

bool ArduinoTestingJig::enabled(){
    return this->enable;
}

ArduinoTestingJig TestingJig;