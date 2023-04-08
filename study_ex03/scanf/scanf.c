#include <stdio.h>

void test01() {
    int num1;
    int num2;
    int num3;

    printf("input three Integer : ");
    scanf("%d %o %x", &num1, &num2, &num3);

    printf("print Integer : ");
    printf("%d %d %d \n", num1, num2, num3);
};

void test02() {
    float num1;
    double num2;
    long double num3;

    printf("input float1(e) : ");
    scanf("%f", &num1);
    printf("float1 %f \n", num1);

    printf("input float2(e) : ");
    scanf("%lf", &num2);
    printf("float2 %f \n", num2);

    printf("input float3(e) : ");
    scanf("%Lf", &num3);
    printf("float3 %Lf \n", num3);
};

int main(void) {
    test02();
    return 0;
};