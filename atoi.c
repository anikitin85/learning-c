#include <stdio.h>

/*  atoi: convert s to int */
int atoi(char s[]);
int lower(int c);

int main()
{
    char s[] = "123abc";
    printf("%d\n", atoi(s));
    printf("%c", lower('A'));
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