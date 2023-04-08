#include <stdio.h>

int main(void) {

    int num1 = 15; // 00000000 00000000 00000000 00001111
    int num2 = ~num1;

    printf("NOT cal result : %d \n", num2);

    return 0;
};