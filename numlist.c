#include <stdio.h>
#include <stdlib.h>

#include "numlist.h"

void fibonacci_list(int n)
{
    int i;
    int *arr;
    if(n <= 0)
    {
        printf("Must choose a positive number.\n");
        return;
    }

    if(n == 1)
    {
        printf("1\n");
        return;
    }
    else if(n == 2)
    {
        printf("1 1\n");
        return;
    }

    arr = (int*)calloc(n, sizeof(int));

    arr[0] = 1;
    arr[1] = 1;

    printf("1 1 ");

    for(i = 2; i < n; i++)
    {
        arr[i] = arr[i - 1] + arr[i - 2];
        printf("%d ", arr[i]);
    }
    printf("\n");
}
