#include <stdio.h>

int main(void) {
    
    int num1 = 3;
    int num2 = 4;
    int result = num1 + num2;

    printf("Sum result : %d \n", num1 + num2);
    printf("%d+%d=%d \n", num1, num2, result);

    int num3 = 9;
    int num4 = 2;

    printf("%d+%d=%d \n", num3, num4, num3 + num4);
    printf("%d-%d=%d \n", num3, num4, num3 - num4);
    printf("%dx%d=%d \n", num3, num4, num3 * num4);
    printf("%d/%d=%d \n", num3, num4, num3 / num4);
    printf("%d/%d=%d \n", num3, num4, num3 % num4);

    int num5 = +2;
    int num6 = -4;

    num5 = -num5;
    printf("num5: %d \n", num5);

    num6 = -num6;
    printf("num6: %d \n", num6);

    printf("num5: %d \n", num5);
    printf("num5++: %d \n", num5++);
    printf("++num5: %d \n", ++num5);
    
    printf("num5 == num6 : %d \n", !(num5 == num6));

    int result2;
    int num7, num8;

    printf("num6 : ");
    scanf("%d", &num7);

    printf("num7 : ");
    scanf("%d", &num8);

    result2 = num7 + num8;
    printf("result : %d \n", result2);

    return 0;
};