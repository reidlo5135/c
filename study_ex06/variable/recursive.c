#include "include/recursive.h"

void recursive(int num) {
    if (num < 0) {
        return;
    };
    printf("recursive call %d \n", num);
    recursive(num -1);
};

int main(void) {
    recursive(3);
    return 0;
};