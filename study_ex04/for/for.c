#include <stdio.h>

void test01() {
    int total = 0;
    int i;
    int num;
    
    printf("0 ~ num sum : ");
    scanf("%d", &num);

    for(i=0;i<num+1;i++) {
        total += i;
    };

    printf("0 ~ %d sum result : %d \n", num, total);
};

void test02() {
    int cur;
    int is;

    for(cur=2;cur<10;cur++) {
        for(is=1;is<10;is++) {
            printf("%d x %d = %d \n", cur, is, cur * is);
        };
        printf("\n");
    };
};

int main(void) {
    test02();
    return 0;
};