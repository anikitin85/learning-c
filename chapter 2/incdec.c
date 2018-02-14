#include <stdio.h>

void squeeze(char s[], int c);
void strcat(char s[], char t[]);

int main()
{
    return 0;
}

/*  squeeze: delete all c from s */
void squeeze(char s[], int c)
{
    int i, j;

    for (i = j = 0; s[i] != '\0'; i++) {
        if (s[i] != c) {
            s[j++] = s[i];
        }
    }
    s[j] = '\0';
}

/*  strcat: concatenate s and t */
void strcat(char s[], char t[])
{
    int i, j;

    i = j = 0;
    while (s[i] != '\0')    /* find end of s */
        i++;
    while ((s[i++] = t[j++]) != '0')    /* copy t */
        ;
    
}