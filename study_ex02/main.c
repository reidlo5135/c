#include <stdio.h>

int main(void) {

    int num1 = 0xA7;
    int num2 = 0x43;
    int num3 = 032;
    int num4 = 024;

    printf("0xA7 to 10 : %d \n", num1);
    printf("0x43 to 10 : %d \n", num2);
    printf("032 to 10 : %d \n", num3);
    printf("024 to 10 : %d \n", num4);

    int i;
    float num = 0.0;

    for(i=0;i<100;i++) {
        num += 0.1;
    };

    printf("0.1 + 100 times : %f \n", num);

    return 0;
};