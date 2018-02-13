#include <stdio.h>

int lower(int character);

/*  Exercise 2-10: lower() using z ? x : y */

int main()
{
    char c = 'a';
    printf("%c -> %c\n", c, lower(c));
    c = 'A';
    printf("%c -> %c\n", c, lower(c));
    c = '1';
    printf("%c -> %c\n", c, lower(c));
    c = 'V';
    printf("%c -> %c\n", c, lower(c));
    return 0;
}

/*  convert upper case letters to lower case */
int lower(int c)
{
    return (c >= 'A' && c <= 'Z') ? c + ' ' : c;
}