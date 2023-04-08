#include <stdio.h>

void test01() {
    int num;
    printf("input Integer : ");
    scanf("%d", &num);

    if(num < 0) {
        printf("%d is less than 0 \n", num);
    };

    if(num > 0) {
        printf("%d is more than 0 \n", num);
    };

    if(num == 0) {
        printf("%d is equals with 0 \n", num);
    };
};

void test02() {
    int opt;
    double num1;
    double num2;
    double result;

    printf("1. sum 2.substract 3. multiple 4. division \n");
    scanf("%d", &opt);
    
    printf("input two float : ");
    scanf("%lf %lf", &num1, &num2);

    if(opt == 1) {
        result = num1 + num2;
    };
    
    if(opt == 2) {
        result = num1 - num2;
    };

    if(opt == 3) {
        result = num1 * num2;
    };

    if(opt == 4) {
        result = num1 / num2;
    };

    printf("result : %f \n", result);
};

void test03() {
    int num;
    printf("input Integer : ");
    scanf("%d", &num);

    if(num < 0) {
        printf("input is less than 0. \n");
    } else {
        printf("input is more than 0. \n");
    };
};

void test04() {
    int opt;
    double num1;
    double num2;
    double result;

    printf("1. sum 2.substract 3. multiple 4. division \n");
    scanf("%d", &opt);
    
    printf("input two float : ");
    scanf("%lf %lf", &num1, &num2);

    if(opt == 1) {
        result = num1 + num2;
    } else if(opt == 2) {
        result = num1 - num2;
    } else if(opt == 3) {
        result = num1 * num2;
    } else if(opt == 4) {
        result = num1 / num2;
    };

    printf("result : %f \n", result);
};

int main(void) {
    test04();
    return 0;
};