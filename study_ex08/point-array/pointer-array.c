#include "include/pointer-array.h"

void test01() {
    int arr[3] = {0, 1, 2};

    printf("array name : %p \n", arr);
    printf("array first : %p \n", &arr[0]);
    printf("array second : %p \n", &arr[1]);
    printf("array third : %p \n", &arr[2]);
};

void test02() {
    int arr1[3] = {1, 2, 3};
    double arr2[3] = {1.1, 2.2, 3.3};

    printf("%d %g \n", *arr1, *arr2);

    *arr1 += 100;
    *arr2 += 120.5;

    printf("%d %g \n", arr1[0], arr2[0]);
};

void test03() {
    int arr[3] = {15, 25, 35};
    int * ptr = &arr[0]; // int * ptr = arr;

    printf("%d %d \n", ptr[0], arr[0]);
    printf("%d %d \n", ptr[1], arr[1]);
    printf("%d %d \n", ptr[2], arr[2]);
    printf("%d %d \n", *ptr, *arr);
};

void test04() {
    int *ptr1 = 0x0010;
    double *ptr2 = 0x0010;

    printf("%p %p \n", ptr1 + 1, ptr1 + 2);
    printf("%p %p \n", ptr2 + 1, ptr2 + 2);

    printf("%p %p \n", ptr1, ptr2);

    ptr1++;
    ptr2++;
    printf("%p %p \n", ptr1, ptr2);
};

void test05() {
    int arr[3] = {11, 22, 33};
    int *ptr = arr; // int *ptr = &arr[0];
    printf("%d %d %d \n", *ptr, *(ptr + 1), *(ptr + 2));

    printf("%d \n", *ptr);
    ptr++;

    printf("%d \n", *ptr);
    ptr++;

    printf("%d \n", *ptr);
    ptr--;

    printf("%d \n", *ptr);
    ptr--;

    printf("%d \n", *ptr);
};

void test06() {
    int num1 = 10;
    int num2 = 20;
    int num3 = 30;

    int *arr[3] = {&num1, &num2, &num3};
    printf("%d \n", *arr[0]);
    printf("%d \n", *arr[1]);
    printf("%d \n", *arr[2]);
};

int main(void) {
    test06();
    return 0;
};