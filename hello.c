/*
Testing git features
Commit messages will have more info
*/

#include <stdio.h>

#include "operation.h"

int main()
{
    printf("Adding 3 and 4: %d\n", add(3, 4));
    printf("Subtracting 3 and 4: %d\n", subtract(3, 4));
    printf("Multiplying 3 and 4: %d\n", mult(3, 4));
    printf("Dividing 3 and 4: %f\n", divide(3.0, 4.0));
    printf("Dividing 3 and 4: %f\n", divide(3.0, 0.0));
    return 0;
}
