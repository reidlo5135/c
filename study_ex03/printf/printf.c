#include <stdio.h>

void test01() {
    printf("%f \n", 0.1234);
    printf("%e \n", 0.1234);
    printf("%f \n", 0.12345678);
    printf("%e \n", 0.12345678);
};

void test02() {
    double d1 = 1.23e-3; // 0.00123
    double d2 = 1.23e-4; // 0.000123
    double d3 = 1.23e-5; // 0.0000123
    double d4 = 1.23e-6; // 0.00000123

    printf("%g \n", d1);
    printf("%g \n", d2);
    printf("%g \n", d3);
    printf("%g \n", d4);
};

void test03() {
    printf("%s %s, %s \n", "AAA", "BBB", "CCC");
};

void test04() {
    printf("%-8s %14s %5s \n", "NAME", "Department", "HI");
};

int main(void) {
    test04();
    return 0;
};