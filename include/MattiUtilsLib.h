#ifndef MY_LIBRARY_H
#define MY_LIBRARY_H

#include <Arduino.h>

String getValue(String, char, int);

double mapf(double, double, double, double, double);

static char* beautifyStr(String);
static char* test();

double ipo(double x, double y);

#endif
