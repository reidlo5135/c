#include <stdio.h>

int leftShift(void) {
    int num = 15;

    int result1 = num << 1;
    int result2 = num << 2;
    int result3 = num << 3;

    printf("1 left shift moved : %d \n", result1);
    printf("2 left shift moved : %d \n", result2);
    printf("3 left shift moved : %d \n", result3);

    return 0;
};

int rightShift(void) {
    int num = -16; // 11111111 11111111 11111111 11110000

    printf("2 right shift moved : %d \n", num >> 2);
    printf("3 right shift moved : %d \n", num >> 3);

    return 0;
};

int main(void) {
    leftShift();
    rightShift();

    return 0;
}; 