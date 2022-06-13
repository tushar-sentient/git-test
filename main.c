/*
Testing git features
Commit messages will have more info
*/

#include <stdio.h>

#include "numlist.h"
#include "operation.h"

int main()
{
    int prime_test = 17;
    printf("Adding 3 and 4: %d\n", add(3, 4));
    printf("Subtracting 3 and 4: %d\n", subtract(3, 4));
    printf("Multiplying 3 and 4: %d\n", mult(3, 4));
    printf("Dividing 3 and 4: %f\n", divide(3.0, 4.0));
    fibonacci_list(7);
    is_prime(prime_test) ? 
        printf("%d is prime\n", prime_test) :
        printf("%d is not prime\n", prime_test);
    // this comment resolves the merge conflict
    return 0;
}
