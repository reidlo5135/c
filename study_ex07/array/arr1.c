#include "include/arr1.h"

void arr01() {
    int arr[5];
    int sum = 0;
    int i;

    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;
    arr[4] = 50;

    for(i=0;i<5;i++) {
        sum += arr[i];
    };

    printf("sum result : %d \n", sum);
};

void arr02() {
    int arr1[5] = {1, 2, 3, 4, 5};
    int arr2[] = {1, 2, 3, 4, 5, 6, 7};
    int arr3[5] = {1, 2};

    int ar1Len;
    int ar2Len;
    int ar3Len;

    printf("arr1 length : %d \n", sizeof(arr1));
    printf("arr2 length : %d \n", sizeof(arr2));
    printf("arr3 length : %d \n", sizeof(arr3));

    ar1Len = sizeof(arr1) / sizeof(int);
    ar2Len = sizeof(arr2) / sizeof(int);
    ar3Len = sizeof(arr3) / sizeof(int);

    for(int i=0;i<ar1Len;i++) {
        printf("%d ", arr1[i]);
    };        

    printf("\n");

    for(int j=0;j<ar2Len;j++) {
        printf("%d ", arr2[j]);
    };
    
    printf("\n");

    for(int k=0;k<ar3Len;k++) {
        printf("%d ", arr3[k]);
    };

    printf("\n");
};

int main(void) {
    arr02();
    return 0;
};