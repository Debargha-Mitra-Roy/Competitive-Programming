#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char *str;
    str = malloc(1024 * sizeof(char));
    gets(str); // scanf("%s", str);
    str = realloc(str, strlen(str) + 1);

    int size = strlen(str);

    int *temp = (int *)malloc((size + 1) * sizeof(int));

    for (int i = 0; i < size; i++)
    {
        int ch = (int)(str[i] - '0');

        if (str[i] >= '0' && str[i] <= '9')
            temp[ch]++;
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", temp[i]);
    }
    printf("\n");

    free(temp);

    return 0;
}