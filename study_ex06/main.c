#include <stdio.h>

int add(int num1, int num2) {
    int result = num1 + num2;
    return result;
};

void show_add_result(int num) {
    printf("add result : %d \n", num);
};

int read_num(void) {
    int num;
    scanf("%d", &num);
    return num;
};

void how_to_use_this_prog(void) {
    printf("final result \n");
};

int main(void) {
    int result;
    int num1;
    int num2;
    how_to_use_this_prog();
    num1 = read_num();
    num2 = read_num();
    result = add(num1, num2);
    show_add_result(result);

    return 0;
};