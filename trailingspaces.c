#include <stdio.h>

#define MAXLINE 1000        /* maximum input line length */

int mgetline(char line[], int maxline);
void removeSpaces(char line[], int length);

/* Remove all trailing blanks and tabs */
/* Delete entirely blank lines */
/* Exercise 1-18: based on longestline */
int main()
{
    int len;                /* current line length */
    char line[MAXLINE];     /* current input line */

    while ((len = mgetline(line, MAXLINE)) > 0) {
        removeSpaces(line, len);
        printf("%s", line);
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

/* removeSpaces: remove trailing blanks and tabs */
void removeSpaces(char s[], int len)
{
    int i;
    i = len;
    while (i > 0 && (s[i] == '\t' || s[i] == ' ' || s[i] == '\n' || s[i] == '\0')) {
        --i;
    }
    s[i + 1] = '\n';
    s[i + 2] = '\0';
    return;
}