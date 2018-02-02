#include <stdio.h>

#define MAXLINE 1000        /* maximum input line length */

int mgetline(char line[], int maxline);

/* Print all input line longer than 80 characters */
/* Exercise 1-17: based on longestline */
int main()
{
    int len;                /* current line length */
    int lower;              /* lower limit for output */
    char line[MAXLINE];     /* current input line */

    lower = 80;

    while ((len = mgetline(line, MAXLINE)) > 0)
        if (len > lower)
            printf("%s", line);
    return 0;
}

/* mgetline: read a line into s, return length */
int mgetline(char s[], int lim)
{
    int c, i;

    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}