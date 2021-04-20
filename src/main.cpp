#include <Arduino.h>
#include "ArduinoTestingJig.h"
#include "OverrideFunctions.h"

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  TestingJig.begin();
  pinMode(GPIO_NUM_2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(GPIO_NUM_2, HIGH);
  delay(1000);
  digitalWrite(GPIO_NUM_2, LOW);
  delay(1000);
}