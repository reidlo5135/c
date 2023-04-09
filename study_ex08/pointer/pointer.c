#include "include/pointer.h"

void test01() {
    int num1 = 100;
    int num2 = 100;
    int * pnum; // pointer pnum1 -> num1

    pnum = &num1;
    (*pnum) += 30; // num1 += 30;

    pnum = &num2;
    (*pnum) -= 30; // num2 -= 30;

    printf("num1 : %d, num2 : %d \n", num1, num2);
};

int main(void) {
    test01();
    return 0;
};