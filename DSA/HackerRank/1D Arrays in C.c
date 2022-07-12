#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);

    int *arr = (int*)malloc(n * sizeof(int));

    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", arr + i);

        sum = sum + arr[i];
    }

    printf("%d\n", sum);

    return 0;
}