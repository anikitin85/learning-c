#include <stdio.h>

float toCelsius(float fahrenheit);

/*  Exercise 1-15: print Fahrenheit-Celsius table
    for fahr = 0, 20, ..., 300; function version */

int main()
{
    float fahr;
    int lower, upper, step;

    lower = 0;      /* lower limit of temperature table */
    upper = 300;    /* upper limit */
    step = 20;      /* step size */

    printf("%3s %6s\n", "F", "C");
    for (fahr = lower; fahr <= upper; fahr += step)
        printf("%3.0f %6.1f\n", fahr, toCelsius(fahr));
}

float toCelsius(float f)
{
    return (5.0/9.0) * (f - 32.0);
}