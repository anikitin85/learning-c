#include <stdio.h>

/*  Exercise 2-3: Convert string '0xFFFFF' to integer */

#define MAXLINE 1000 /* maximum input line length */

int mgetline(char line[], int lim);
int htoi(char s[], int len);

int main()
{
    int len;
    char s[MAXLINE];
    while ((len = mgetline(s, MAXLINE)) > 0)
    {
        printf("Converted: %x", s, htoi(s, len));
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
int htoi(char s[], int len)
{
    int res = 0;
    int prefix = 0;
    if (len > 2 && s[0] == '0' && s[1] == 'x') {
        prefix = 1;
    }

    


    return res;
}