#include <stdio.h>
#include <ctype.h>

/*  Exercise 2-3: Convert string '0xFFFFF' to integer */

#define MAXLINE 1000 /* maximum input line length */

int mgetline(char line[], int lim);
int power(int m, int n);
int htoi(char s[], int len);

int main()
{
    int len;
    char s[MAXLINE];
    while ((len = mgetline(s, MAXLINE)) > 0)
    {
        printf("Converted: %x\n", htoi(s, len));
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

/* power: raise base t n-th power; n >= 0 */
int power(int base, int n)
{
    int i, p;

    p = 1;
    for (int i = 1; i <= n; ++i)
        p = p * base;
    return p;
}

/* htoi: convert string hex to integer */
int htoi(char s[], int len)
{
    int res = 0;
    int i = 0;
    char cur;
    if (len > 2 && s[0] == '0' && s[1] == 'x') {
        s[0] = ' ';
        s[1] = ' ';
        len -= 2;
    }
    len--;
    while ((cur = s[i]) != '\0') {
        if (isdigit(cur)) {
            res += (cur - '0') * power(16, len);
        }
        else if (cur >= 'a' && cur <= 'f') {
            res += (cur - 'a') * power(16, len);
        }
        else if (cur >= 'A' && cur <= 'F') {
            res += (cur - 'A') * power(16, len);
        }
        i++;
        len--;
    }

    return res;
}