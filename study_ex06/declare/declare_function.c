#include <stdio.h>

int compare_abs(int num1, int num2);
int get_abs(int num);

int main(void) {
    int num1;
    int num2;
    scanf("%d %d", &num1, &num2);
    printf("compare result : %d \n", compare_abs(num1, num2));
    return 0;
};

int compare_abs(int num1, int num2) {
    if(get_abs(num1) > get_abs(num2))
        return num1;
    else
        return num2;
};

int get_abs(int num) {
    if(num < 0)
        return -(num);
    else
        return num;
};

int compare_number(int num1, int num2) {
    if(num1 > num2)
        return num1;
    else
        return num2;
};