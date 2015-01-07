#include <stdio.h>

int simple_function(int input_argument);
  
main() {
    int value_returned_from_function;
    
    printf ("Hi from main\n");
    value_returned_from_function = simple_function(1);
    printf ("Bye from main\n");
    simple_function(value_returned_from_function);
}

int simple_function(int input_argument) {
    printf ("-Hi from simple_function\n");
    printf ("-You passed in an argument with the value of %i\n", input_argument);
    //return 1; function will always return 1
    return ++input_argument; // input_argument + 1
}