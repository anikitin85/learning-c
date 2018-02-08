#include <stdio.h>

/*  Exercise 2-3: Convert string '0xFFFFF' to integer */

#define MAXLINE 1000 /* maximum input line length */

int mgetline(char line[], int lim);
int htoi(char s[]);

int main()
{
    char s[MAXLINE];
    while (mgetline(s, MAXLINE) > 0)
    {
        printf("Converted: %x", s, htoi(s));
    }
    return 0;
}

/* mgetline: read a line into s, return length */
int mgetline(char s[], int lim)
{
    int c, i;

    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;
    if (c == '\n')
    {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

/* htoi: convert string hex to integer */
int htoi(char s[])
{
    int res = 0;
    return res;
}