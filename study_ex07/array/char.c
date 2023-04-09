#include "include/char.h"

void test01() {
    char str[] = "Reidlo";
    printf("length : %d \n", sizeof(str));
    printf("output null : %c \n", str[7]);
    printf("output null : %d \n", str[7]);

    str[6] = '?';
    printf("output string : %s \n", str);
};

void test02() {
    char nu = '\0';
    char sp = ' ';
    printf("%d %d \n", nu, sp);
};

void test03() {
    char str[50];
    int idx = 0;

    printf("input string : ");
    scanf("%s", str);
    printf("input string result : %s \n", str);

    printf("output string : ");
    while (str[idx] != '\0') {
        printf("%c", str[idx]);
        idx++;
    };
    printf("\n");
};

void test04() {
    char str[50] = "I like C programming";
    printf("string : %s \n", str);

    str[8] = '\0';
    printf("string : %s \n", str);

    str[6] = '\0';
    printf("string : %s \n", str);

    str[1] = '\0';
    printf("string : %s \n", str);
};

void test05() {
    char str[50];
    int idx=0;

    printf("input string : ");
    scanf("%s", str);
    printf("input string result : %s \n", str);

    printf("output string : ");
    while (str[idx] != '\0') {
        printf("%c", str[idx]);
        idx++;
    };
    printf("\n");
};

int main(void) {
    test05();
    return 0;
};