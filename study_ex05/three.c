#include <stdio.h>

void test01() {
    int num;
    int abs;

    printf("input Integer : ");
    scanf("%d", &num);

    abs = num > 0 ? num : num * (-1);
    printf("abs : %d \n", abs);
};

int main(void) {
    test01();
    return 0;
};