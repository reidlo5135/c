#include <stdio.h>

void test01() {
    int num = 0;

    while(num < 5) {
        printf("Hello While %d \n", num);
        num++;
    };
};

void test02() {
    int dan = 7;
    int num = 1;
    while(1) {
        printf("%d x %d = %d \n", dan, num, dan*num);
        num++;
        if(num == 10) break;
    };
};

void test03() {
    int cur = 2;
    int is = 0;
    
    while(cur < 10) {
        is = 1;
        while(is < 10) {
            printf("%d x %d = %d \n", cur, is, cur*is);
            is++;
        };
        cur++;
    };
};

void test04() {
    int total = 0;
    int num = 0;

    do {
        printf("input Integer(0 to quit) : ");
        scanf("%d", &num);
        total += num;
    } while(num != 0);
        printf("total : %d \n", total);
};

int main(void) {
    test04();
    return 0;
};