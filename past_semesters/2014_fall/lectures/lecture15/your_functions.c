#include <stdio.h>

int simple_function(int input_argument);
float your_function(int integer, float decimal, char character); // prototype
  
main() {
    int integer = 0;
    float decimal = 100.1;
    char character = 'c';
    
    printf("your_function returned: %f\n", your_function(integer, decimal, character));
}

int simple_function(int input_argument) {
    printf ("-Hi from simple_function\n");
    printf ("-You passed in an argument with the value of %i\n", input_argument);
    //return 1; function will always return 1
    return ++input_argument; // input_argument + 1
}

float your_function(int integer, float decimal, char character) {
    printf("integer: %d\n", integer);
    printf("decimal: %f\n", decimal); // can be fixed with %.2f
    printf("character: %c\n", character);
    return decimal;
}