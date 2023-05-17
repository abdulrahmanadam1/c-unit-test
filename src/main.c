#include <stdio.h>
#include "average.h"
#include "temperature.h"

int main()
{
    float array[] = {-1.0, 0.0, 1.0, 2.0, 3.0};
    float avg = average(array, 5);

    float celsius_temp = 20;
    float fahrenheit_temp = celsius_to_fahrenheit(celsius_temp);
    
    printf("Temperature in celsius:\t%.2f\tTemperature in fahrenheit:\t%.2f\n",celsius_temp,fahrenheit_temp);

    printf("Average: %f\r\n", avg);
    return 0;
}