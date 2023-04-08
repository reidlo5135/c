#include <stdio.h>

void add(int val);
int num;

int main(void) {
    printf("num : %d \n", num);
    add(3);
    printf("num : %d \n", num);
    num++;
    printf("num : %d \n", num);
    return 0;
};

void add(int val) {
    num += val;
};