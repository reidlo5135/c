#include "include/static.h"

void simple(void) {
    static int num1 = 0;
    int num2 = 0;
    num1++;
    num2++;
    printf("static : %d, local : %d \n", num1, num2);
};

int main(void) {
    simple();
    return 0;
};