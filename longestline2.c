#include <stdio.h>

/* Exercise 1-16 */
/* Print longest input line, however long it is */

int mgetline(char line[]);
void copy(char to[], char from[]);

int main()
{
    int len;                /* current line length */
    int max;                /* maximum length so far */
    char line[32565];            /* current input line */
    char longest[32565];         /* longest line saved here */

    max = 0;

    while ((len = mgetline(line)) > 0)
        if (len > max) {
            max = len;
            copy(longest, line);
        }
    if (max > 0) {
        printf("The longest line is %d characters long\n(including a new line character), and here it is:\n", max);
        printf("%s", longest);
    }
    return 0;
}

/* mgetline: read a line into s, return length */
int mgetline(char s[])
{
    int c, i;

    for (i = 0; (c = getchar()) != EOF && c != '\n'; ++i)
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