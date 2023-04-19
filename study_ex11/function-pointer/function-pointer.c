#include "include/function-pointer.h"

void simple_add(int n1, int n2) {
    printf("%d + %d = %d \n", n1, n2, n1 + n2);
}

void simple_string(char * str) {
    printf("%s \n" , str);
}

void simple_func(void) {
    printf("simple func");
}

int main (void) {
    char * str = "Function Pointer";
    int num1 = 10;
    int num2 = 20;

    void (*fptr1)(int, int) = simple_add;
    void (*fptr2)(char *) = simple_string;

    fptr1(num1, num2);
    fptr2(str);

    int num = 20;
    void * ptr;

    ptr = &num;
    printf("%p \n", ptr);

    ptr = simple_func;
    printf("%p \n", ptr);
    return 0;
}