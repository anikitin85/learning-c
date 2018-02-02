#include <stdio.h>

/* Exercise 1-8: Count blanks, tabs, newlines */
int main()
{
    int i, c;
    
    i = 0;
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\t' || c == '\n')
            ++i;
    }
    printf("# of spaces + tabs + linebreaks is %d", i);
}