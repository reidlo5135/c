#include "include/threeDimArray.h"

void test01() {
    int arr1[2][3][4];
    double arr2[5][5][5];

    printf("2, 3, 4 arr : %d \n", sizeof(arr1));
    printf("5, 5, 5 arr : %d \n", sizeof(arr2));
};

void test02() {
    int mean = 0;
    int record[3][3][2] = {
        {
            {70, 80},
            {94, 90},
            {70, 85}
        },
        {
            {83, 90},
            {95, 60},
            {90, 82}
        },
        {
            {98, 89},
            {99, 94},
            {91, 87}
        }
    };

    for(int i=0;i<3;i++) {
        for(int j=0;j<2;j++) {
            mean += record[0][i][j];
        };
    };

    printf("first record : %g \n", (double)mean / 6);

    mean = 0;
    
    for(int i=0;i<3;i++) {
        for(int j=0;j<2;j++) {
            mean += record[1][i][j];
        };
    };

    printf("second record : %g \n", (double)mean / 6);

    mean = 0;

    for(int i=0;i<3;i++) {
        for(int j=0;j<2;j++) {
            mean += record[2][i][j];
        };
    };

    printf("third record : %g \n", (double)mean / 6);
};

int main(void) {
    test02();
    return 0;
};