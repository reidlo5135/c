#include "include/twoDimArray.h"

void test01() {
    int arr1[3][4];
    int arr2[7][9];

    printf("3, 4 : %d \n", sizeof(arr1));
    printf("7, 9 : %d \n", sizeof(arr2));
};

void test02() {
    int villa[4][2];
    int popu;

    for(int i=0;i<4;i++) {
        for(int j=0;j<2;j++) {
            printf("%d층 %d호 인구수 : ", i + 1, j + 1);
            scanf("%d", &villa[i][j]);
        };
    };

    for(int i=0;i<4;i++) {
        popu = 0;
        popu += villa[i][0];
        popu += villa[i][1];
        printf("%d층 인구수 : %d \n", i + 1, popu);
    };
};

void test03() {
    int arr[3][2];
    for(int i=0;i<3;i++) {
        for(int j=0;j<2;j++) {
            printf("%p \n", &arr[i][j]);
        };
    };
};

void test04() {
    int arr1[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int arr2[3][3] = {
        {1},
        {4, 5},
        {7, 8, 9}
    };
    
    int arr3[3][3] = {1, 2, 3, 4, 5, 6, 7};

    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++) {
            printf("%d ", arr1[i][j]);
        };
        printf("\n");
    };

    printf("\n");

    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++) {
            printf("%d ", arr2[i][j]);
        };
        printf("\n");
    };

    printf("\n");

    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++) {
            printf("%d ", arr3[i][j]);
        };
        printf("\n");
    };

    printf("\n");
};

int main(void) {
    test04();
    return 0;
};