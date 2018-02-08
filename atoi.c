#include <stdio.h>
#include <ctype.h>

/*  atoi: convert s to int */
int atoi(char s[]);
int lower(int c);

int main()
{
    char s[] = "123abc";
    printf("%d\n", atoi(s));
    printf("%c\n", lower('A'));
    printf("%d", isdigit('3'));
    return 0;
}

int atoi(char s[])
{
    int i, n;

    n = 0;
    for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i) {
        n = 10 * n + (s[i] - '0');
    }
    return n;
}

/*  lower: convert c to lower case; ASCII only */
int lower(int c)
{
    if (c >= 'A' && c <= 'Z')
        return c + 'a' - 'A';
    else
        return c;
}

// <ctype.h>:   tolower(c) - make lower case
//              isdigit(c) - test c >= '0' && c <= '9'

// d = c >= '0' && c <= '9'
// d = 1 if c is a digit
// d = 0 if c is not a digit
// but isdigit(c) can return any non-zero value if c is a digit
// For if/while/for any non-zero is TRUE anyway

// Casting
// (double) n - convert int n to double
// Example:
// sqrt(n) (part of <math.h>) needs double
// If I want to get a square root of int n,
// casting is needed: sqrt((double) n)