#include <stdio.h>

int main(void) {
    double rad;
    double area;

    printf("radius of circle : ");
    scanf("%lf", &rad);

    area = rad * rad * 3.1415;
    printf("area of circle : %f \n", area);
    return 0;
};