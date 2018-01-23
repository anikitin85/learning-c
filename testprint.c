#include <stdio.h>

#define MAXLINE 1000

int mgetline(char s[], int lim);
void mprint(char line[]);

/* test strings using a custom print function */
int main()
{
    int len;
    char line[MAXLINE];

    while ((len = mgetline(line, MAXLINE)) > 0) {
        printf("length = %d\n", len);
        mprint(line);
    }
    return 0;
}

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

void mprint(char s[])
{
    int i = 0;
    while(s[i] != '\0') {
        if (s[i] == '\n')
            printf("\\n");
        else if (s[i] == '\t')
            printf("\\t");
        else if (s[i] == ' ')
            printf("\\s");
        else
            putchar(s[i]);
        ++i;
    }
    if (s[i] == '\0')
        printf("\\0\n");
    else
        printf("_NO \\0 SYMBOL_\n");
    return;
}