#include "include/register.h"

int simple(void) {
    register int num = 3;
    return num;
};

int main(void) {
    int regi = simple();
    printf("result : %d \n", regi);
};