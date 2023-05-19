#include "temperature.h"


float celsius_to_fahrenheit(float input)
{
    return (float)((input * 9/5) + 32);
}

float fahrenheit_to_celsius(float input)
{ 
    return (float)((input - 32) * (5.0/9.0));
}
