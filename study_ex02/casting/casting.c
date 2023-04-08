#include <stdio.h>

void test01() {
    double num1 = 245;
    int num2 = 3.1415;
    int num3 = 129;
    char ch = num3;

    printf("Integer 245 to actual number : %f \n", num1);
    printf("Actual number 3.1415 to Integer : %d \n", num2);
    printf("BigInt 129 to Integer : %d \n", ch);
};

void test02() {
    int num1 = 3;
    int num2 = 4;
    double divResult = (double)num1 / num2;
    printf("Casting Integer into double : %f \n", divResult);
};

void test03() {
    int num1 = 3;
    double num2 = 2.5 * (double)num1;
    printf("Casting Integer into double : %f \n", num2);
};

int main(void) {
    test03();
    return 0;
};