/**
 * @file ArduinoTestingJig.h
 * @author Wesley José Santos
 * @brief 
 * @version 0.1
 * @date 2021-04-09
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef __ARDUINOTESTINGJIG__H__
#define __ARDUINOTESTINGJIG__H__

#include "Functions.h"

class ArduinoTestingJig
{
private:
    bool enable;
public:
    ArduinoTestingJig();
    void processComands();
    void begin();
    bool enabled();
};

extern ArduinoTestingJig TestingJig;

#endif  //!__ARDUINOTESTINGJIG__H__