#include <stdio.h>

main() {
    int i_am_an_integer;
    float i_am_a_float;

    i_am_an_integer = 11;
    i_am_a_float = 3.99;

    printf("This is type cast to a float: %f \n", (float) i_am_an_integer);
    printf("The variable is still an integer: %i \n", i_am_an_integer);
    printf("This is type cast to an integer: %i (notice that the decimal points were truncated)\n", (int) i_am_a_float);
    printf("The variable is still a float: %f \n", i_am_a_float);
    
    printf("division operation: %f\n", i_am_an_integer/i_am_a_float);
    
    printf("division with constant: %f\n", i_am_an_integer/3.0);
}