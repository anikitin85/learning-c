#include <stdio.h>

#define MAXLINE 1000

/*  Exercise 2-2: Write a loop equivalent to this:
    for (i = 0; i < lim - 1 && (c = getchar()) != '\n' && c != EOF; ++i)
        s[i] = c;
    without using && or || */

int main()
{
    char c;
    int lim = MAXLINE;
    char s[MAXLINE] = "";
    
    for (int i = 0; i < lim - 1; ++i) {
        if ((c = getchar()) != '\n') {
            if (c != EOF)
                s[i] = c;
        }
    }
}