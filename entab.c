#include <stdio.h>

#define TAB 8        /* tab stops after this many characters */
#define MAXLINE 1000 /* maximum input line length */

int mgetline(char line[], int lim);
void entab(char line[], int tabstop);

/*  Exercise 1-21: replace blanks with tabs and blanks. */
/* Today I am doing an Excel cource. Sorry, K&R! */
/* Another day for that Excel course... */
int main()
{
    int len;            /* current line length */
    char line[MAXLINE]; /* current input line */

    while ((len = mgetline(line, MAXLINE)) > 0)
    {
        entab(line, TAB);
        printf("%s\n", line);
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

/* entab: replace blanks with tabs and blanks */
void entab(char s[], int tabstop)
{
    char temp[MAXLINE];
    int i, j, c, tabhere;

    i = 0;
    // Copy the original string to a temporary array
    while ((temp[i] = s[i]) != '\0') {
        ++i;
    }
    // TODO: replace spaces with tabs
    i = j = c = tabhere = 0;
    while (temp[i] != '\0') {
        if (temp[i] == ' ') {
            c = i;
            while (temp[c] == ' ')
                ++c;
            tabhere = c / TAB * TAB;
            if (tabhere > i && tabhere < c) {
                s[j] = '\t';
                ++j;
                i = tabhere;
            }
            else {
                // tabhere is not inbetween, so just copy blanks
                while ((s[j] = temp[i]) == ' ') {
                    ++j;
                    ++i;
                } 
            }
        }
        else {
            s[j] = temp[i];
            ++i;
            ++j;
        }
    }
    s[j] = '\0';
    return;
}