#include <stdio.h>

main() {
    int integer;
    integer = 1;
    int *integer_pointer;
    integer_pointer = &integer;

    printf ("===integer===\n");
    printf ("%20d: integer, value of 'integer' variable\n", integer);
    printf ("%20p: &integer, address of 'integer' variable\n", &integer);
    printf ("%20c: *integer is a syntax error\n\n", ' ');
    
    printf ("===integer_pointer===\n");
    printf ("%20p: integer_pointer, value of 'integer_pointer' variable\n", integer_pointer);
    printf ("%20d: *integer_pointer, value of the object that the 'integer_pointer' variable points to\n", *integer_pointer);
    printf ("%20p: &integer_pointer, address of 'integer_pointer' variable\n", &integer_pointer);
}