#include "temperature.h"


float celsius_to_fahrenheit(float input)
{
    return ((9.0 / 5.0) * input) + 32.0;
}

float fahrenheit_to_celsius(float input)
{ 
    return (input - 32.0) * (5.0 / 9.0);
}
