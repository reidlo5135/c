#include "include/main-function.h"

void show_all_string(int argc, char *argv[]) {
    for(int i=0;i<argc;i++) {
        printf("%s \n", argv[i]);
    }
}

int main(int argc, char *argv[]) {
    char * str[3] = {"C", "C++", "nodejs"};
    show_all_string(3, str);
    return 0;
}