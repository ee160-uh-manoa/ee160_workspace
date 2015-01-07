#include <stdio.h>

main() {
    int integer = 10;
    float decimal = 10;

    //printf("integer / 3 = %f\n", integer/3); // this doesn't work
    printf("decimal / 3 = %f\n", decimal/3);
    printf("integer / 3.0 = %f\n", integer/3.0);
    printf("(float)integer / 3 = %f\n", (float)integer/3); // we'll go over type casting next week
}