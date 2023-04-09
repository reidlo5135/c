#include "include/double-pointer.h"

void test01() {
    double num = 3.14;
    double *ptr = &num;
    double **dptr = &ptr;
    double *ptr2;

    printf("%9p %9p \n", ptr, *dptr);
    printf("%9g %9g \n", num, **dptr);
    ptr2 = *dptr; // ptr2 = ptr;
    *ptr2 = 10.99;
    printf("%9g %9g \n", num, **dptr);
};

void test02(int *p1, int *p2) {
    int *temp = p1; // 10
    p1 = p2; // 10, 20
    p2 = temp; // 20, 10
};

void test03(int **dp1, int **dp2) {
    int *temp = *dp1;
    *dp1 = *dp2;
    *dp2 = temp;
};

int main(void) {
    int num1 = 10;
    int num2 = 20;

    int *ptr1;
    int *ptr2;

    ptr1 = &num1; // 10
    ptr2 = &num2; // 20
    printf("*ptr1, *ptr2 : %d %d \n", *ptr1, *ptr2);

    test03(&ptr1, &ptr2);
    printf("*ptr1, *ptr2 : %d %d \n", *ptr1, *ptr2);

    return 0;
};