#include <stdio.h>

main() {
    int integer;
    float decimal;

    printf("please enter integer:\n");
    scanf(" %d", &integer);
    printf("integer as a int: %d\n", integer);
    printf("integer as a float: %f\n", (float)integer); //okay but be careful
    printf("please enter decimal:\n");
    scanf(" %f", &decimal);
    printf("decimal as a float: %f\n", decimal);
    
    printf("numerator %f\n", (float)(integer*integer));
    printf("numerator %f\n", (4*decimal));
    printf("numerator %f\n", (-integer+(integer*integer-4*decimal)));
    //printf("denominator %f\n", (2*decimal));
    printf("result %f\n", (-integer+((float)(integer*integer)-4*decimal)) / (2*decimal));
}