#include <stdio.h>

int main()
{
    // +, -, *
    // / - Integer division truncates fractional part
    // Modulus operator: % - produces the remainder of x / y


    int year = 1975;

    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        printf("%d is a leap year\n", year);
    else
        printf("%d is not a leap year\n", year);
}