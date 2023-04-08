#include <stdio.h>

void test01() {
    int sum;
    int num;

    while(1) {
        sum += num;
        if(sum > 5000) {
            break;
        }
        num++;
    };

    printf("sum : %d \n", sum);
    printf("num : %d \n", num);
};

void test02() {
    int num;
    printf("start \n");

    for(num=1;num<20;num++) {
        if(num % 2 == 0 || num % 3 == 0) {
            continue;
        };
        printf("%d ", num);
    };
    printf("end \n");
};

void test03() {
    int num;
    printf("input Integer between 1 ~ 5 : ");
    scanf("%d", &num);

    switch(num) {
        case 1:
            printf("1 \n");
            break;
        case 2:
            printf("2 \n");
            break;
        case 3:
            printf("3 \n");
            break;
        case 4:
            printf("4 \n");
            break;
        case 5:
            printf("5 \n");
            break;
        default:
            printf("not in range \n");
    };
};

void test04() {
    char sel;
    printf("M morning, A afternoon, E evening \n");
    printf("input : ");
    scanf("%c",  &sel);

    switch (sel) {
    case 'M':
    case 'm':
        printf("Morning \n");
        break;
    case 'A':
    case 'a':
        printf("Afternoon \n");
        break;
    case 'E':
    case 'e':
        printf("Evening \n");
        break;
    };
};

void test05() {
    int num;
    printf("Nature Number : ");
    scanf("%d", &num);

    if(num == 1)
        goto ONE;
    else if(num == 2)
        goto TWO;
    else
        goto OTHER;

    ONE:
        printf("input 1 \n");
        goto END;
    TWO:
        printf("input 2 \n");
        goto END;
    OTHER:
        printf("input other \n");
    END:
        return;
};

int main(void) {
    test05();
    return 0;
};