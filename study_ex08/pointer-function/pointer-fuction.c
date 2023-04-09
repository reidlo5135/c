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

int main(void) {
    int arr[3] = {1, 2, 3};
    test03(arr, sizeof(arr) / sizeof(int), 1);
    test02(arr, sizeof(arr) / sizeof(int));

    test03(arr, sizeof(arr) / sizeof(int), 2);
    test02(arr, sizeof(arr) / sizeof(int));

    test03(arr, sizeof(arr) / sizeof(int), 3);
    test02(arr, sizeof(arr) / sizeof(int));
    return 0;
};