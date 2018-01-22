#include <stdio.h>
#include <string.h>

int main()
{
    char s[5];
    strcpy(s, "he\0llow");
    printf("%s", s);
}