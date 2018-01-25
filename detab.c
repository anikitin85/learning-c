#include <stdio.h>

#define TAB 8        /* tab stops after this many characters */
#define MAXLINE 1000 /* maximum input line length */

int mgetline(char line[], int lim);
void detab(char line[], int tabstop);

/*  Exercise 1-20: replace tabs with proper number of blanks. */
int main()
{
    int len;            /* current line length */
    char line[MAXLINE]; /* current input line */

    while ((len = mgetline(line, MAXLINE)) > 0)
    {
        detab(line, TAB);
        printf("Same line with no tabs:\n%s", line);
    }
    return 0;
}

/* detab: replace tabs with blanks until next tab stop */
void detab(char s[], int tabstop)
{
    char temp[MAXLINE];
    int thereIsATab, i, j, l;

    i = 0;
    thereIsATab = 0;

    while ((temp[i] = s[i]) != '\0')
    {
        if (thereIsATab == 0 && temp[i] == '\t')
            thereIsATab = 1;
        ++i;
    }
    i = j = 0;
    if (thereIsATab == 1)
    {
        while (temp[i] != '\0')
        {
            if (temp[i] == '\t')
            {
                l = TAB - j % TAB;
                for (; l > 0; --l)
                {
                    s[j] = ' ';
                    ++j;
                }
            }
            else
            {
                s[j] = temp[i];
                ++j;
            }
            ++i;
        }
        s[j] = '\0';
    }
    return;
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