#include "include/pointer-function.h"

void test01(int * param, int len) {
    for(int i=0;i<len;i++) {
        printf("%d ", param[i]);
    };
    printf("\n");
};

void test02(int * param, int len) {
    for(int i=0;i<len;i++) {
        printf("%d ", param[i]);
    };
    printf("\n");
};

void test03(int * param, int len, int add) {
    for(int i=0;i<len;i++) {
        param[i] += add;
    };
};

void test04(int n1, int n2) {
    int temp = n1;
    n1 = n2;
    n2 = temp;
    printf("n1 n2 : %d %d \n", n1, n2);
};

void test05(int * ptr1, int * ptr2) {
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
};

int main(void) {
    // int arr[3] = {1, 2, 3};
    // test03(arr, sizeof(arr) / sizeof(int), 1);
    // test02(arr, sizeof(arr) / sizeof(int));

    // test03(arr, sizeof(arr) / sizeof(int), 2);
    // test02(arr, sizeof(arr) / sizeof(int));

    // test03(arr, sizeof(arr) / sizeof(int), 3);
    // test02(arr, sizeof(arr) / sizeof(int));

    int num1 = 10;
    int num2 = 20;
    printf("n1 n2 : %d %d \n", num1, num2);

    // test04(num1, num2);
    test05(&num1, &num2);
    printf("num1 num2 : %d %d \n", num1, num2);
    return 0;
};