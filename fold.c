#include <stdio.h>

#define FOLDAFTER 30    /* tab stops after this many characters */
#define MAXLINE 1000    /* maximum input line length */

int mgetline(char line[], int lim);
void foldprint(char line[], int foldafter);

/*  Exercise 1-22: 'Fold'
    Fold long input lines into two or more shorter lines */
int main()
{
    int len;            /* current line length */
    char line[MAXLINE]; /* current input line */

    while ((len = mgetline(line, MAXLINE)) > 0)
    {
        foldprint(line, FOLDAFTER);
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

/*  foldprint: break a long input line into
    shortert lines up to FOLDAFTER characters long */
void foldprint(char s[], int foldafter)
{
    // get char from s[]
    // if counter < foldafter
    // putchar
    // else
    // new line
    // reset counter
    // putchar
}