#include <stdio.h>

/* Exercise 1-10: I2O, tab to \t, backsp to \b, \ to \\ */
/* Not elegant */
int main()
{
    int c;

    while ((c = getchar()) != EOF) {
        if (c == '\t') printf("\\t");
        else if (c == '\b') printf("\\b");
        else if (c == '\\') printf("\\\\");
        else putchar(c);
    }
}