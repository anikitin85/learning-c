#include <stdio.h>

#define MAXLINE 1000    /* maximum input line length */

int mgetline(char line[], int maxline);
void copy(char to[], char from[]);

/* Print longest input line */
/* Exercise 1-16: change only main(), don't touch mgetline() */
/* Arbitrary long lines */
int main()
{
    int len, c;             /* current line length */
    int max;                /* maximum length so far */
    char line[MAXLINE];     /* current input line */
    char longest[MAXLINE];  /* longest line saved here */

    max = 0;

    while ((len = mgetline(line, MAXLINE)) > 0) {
        if (len >= MAXLINE - 1 && line[MAXLINE - 1] != '\n') {
            c = getchar();
            while (c != '\n' && c != EOF) {
                ++len;
                c = getchar();
            }
        }
        if (len > max) {
            max = len;
            copy(longest, line);
        }
    }
    if (max > 0) {
        printf("Longest line was %d characters long.\nHere is the first thousand:", max);
        printf("%s", longest);
    }
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

/* copy: copy 'from' into 'to' */
void copy(char to[], char from[])
{
    int i;

    i = 0;
    while ((to[i] = from [i]) != '\0')
        ++i;
}