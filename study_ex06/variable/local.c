#include <stdio.h>

int one(void) {
    int num = 10;
    num++;
    printf("one : %d \n", num);
    return 0;
};

int two(void) {
    int num1 = 10;
    int num2 = 30;
    num1++;
    num2--;
    printf("num1 & num2 : %d \n", num1, num2);
    return 0;
};

int main(void) {
    int num = 17;
    one();
    two();
    printf("main result : %d \n", num);
    return 0;
};