#include "include/factorial.h"

int factorial(int n) {
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
};

int main(void) {
    printf("1! = %d \n", factorial(1));
    printf("2! = %d \n", factorial(2));
    printf("3! = %d \n", factorial(3));
    printf("4! = %d \n", factorial(4));
    printf("9! = %d \n", factorial(9));

    return 0;
};