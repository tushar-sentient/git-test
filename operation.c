#include <stdio.h>
#include <stdlib.h>

#include "operation.h"

int add(int a, int b)
{
    return a + b;
}

int subtract(int a, int b)
{
    return a - b;
}

int mult(int a, int b)
{
    return a * b;
}

double divide(double a, double b)
{
    if(b == 0)
    {
        printf("Cannot perform operation.\n");
        exit(EXIT_FAILURE);
    }
    return a / b;
}
