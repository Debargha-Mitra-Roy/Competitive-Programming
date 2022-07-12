#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int num, *arr, i;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for (i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }


    /* Write the logic to reverse the array. */

    int left = 0, right = num - 1;

    while (left < right)
    {
        int mid  = (left + right) / 2;

        swap(&arr[left], &arr[right]);

        left++;
        right--;
    }

    for (i = 0; i < num; i++)
        printf("%d ", *(arr + i));

    return 0;
}