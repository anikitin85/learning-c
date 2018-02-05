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

    // relational ops: >, >=, <, <=
    // equality ops: ==, !=
    // logical ops: &&, ||
    // for (i = 0; i < lim - 1 && (c = getchar()) != '\n' && c != EOF; ++i);

    // Numeric value of a relational/logical expression
    // is 0 for FALSE and 1 for TRUE

    // ! converts 0 to 1, and non-0 to 0:
    // valid = 1; !valid = 0;
    // valid = 0; !valid = 1;
    // Use if (!valid) rather than if (valid == 0)
}