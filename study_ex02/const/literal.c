#include <stdio.h>

void test01() {
    printf("literal int size : %d \n", sizeof(7));
    printf("literal double size : %d \n", sizeof(7.14));
    printf("literal char size : %d \n", sizeof('A'));
};

float test02() {
    float num1 = 5.789f;
    float num2 = 3.24F + 5.12F;
    float result = num1 + num2;

    return result;
};

int main(void) {
    test01();

    float result = test02();
    printf("test02 result : %f \n", result);
    
    return 0;
};