#include "include/string.h"

void test01() {
    char str1[] = "My String"; // variable string
    char *str2 = "Your String"; // constant string
    printf("%s %s \n", str1, str2);

    str2 = "Our String"; // change point target
    printf("%s %s \n", str1, str2);

    str1[0] = 'X'; // change string success
    str2[0] = 'X'; // change string failed

    printf("%s %s \n", str1, str2);
};

void test02() {
    char *strArr[3] = {"simple", "string", "array"};
    printf("%s \n", strArr[0]);
    printf("%s \n", strArr[1]);
    printf("%s \n", strArr[2]);
};

int main(void) {
    test02();
    return 0;
};