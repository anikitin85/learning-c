#include <stdio.h>

#define MAXLINE 1000        /* maximum input line length */

int mgetline(char line[], int maxline);
void reverseline(char line[]);

/* Exercise 1-19: Reverse input line */
int main()
{
    int len;                /* current line length */
    char line[MAXLINE];     /* current input line */

    while ((len = mgetline(line, MAXLINE)) > 0) {
        reverseline(line);
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

/*reverseline: reverse input line */
void reverseline(char s[])
{
    char temp[MAXLINE];
    int wasNewLine;
    int i, j;

    i = j = 0;
    wasNewLine = 0;
    /* copy s to temp and count length */
    while (s[i] != '\0') {
        temp[i] = s[i];
        ++i;
    }
    --i;
    /* now i points to the last character in s[] before \0 */
    if (s[i] == '\n')
        wasNewLine = 1;
        --i;
    while (i >= 0) {
        s[j] = temp[i];
        --i;
        ++j;
    }
    if (wasNewLine == 1) {
        s[j] = '\n';
        ++j;
    }
    s[j] = '\0';
    return;
}