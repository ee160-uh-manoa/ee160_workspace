#include <stdio.h>

main() {
    int i_am_an_integer;
    char i_am_a_char;
    float i_am_a_float;
    double i_am_a_double;

    i_am_an_integer = 1;
    i_am_a_char = 'c';
    i_am_a_float = 1.23;
    i_am_a_double = 1.23;

    printf("This is an integer: %i \n", i_am_an_integer);
    printf("This is an char: %c \n", i_am_a_char);
    printf("This is an float: 000000%10.4f000 \n", i_am_a_float);
    printf("This is an double: %f \n", i_am_a_double);
}