#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char ch;
    scanf("%c", &ch);

    char s[100];
    scanf("%s", &s);

    char  str[100];
    scanf(" %[^\n]%*c", &str);

    printf("%c\n", ch);
    printf("%s\n", s);
    printf("%s\n", str);

    return 0;
}