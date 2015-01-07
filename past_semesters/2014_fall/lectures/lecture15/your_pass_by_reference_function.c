#include <stdio.h>

int simple_function(int input_argument);
float your_function(int integer, float decimal, char character); // prototype
float your_pass_by_reference_function(int *integer_pointer, float decimal, char *character_pointer);
  
int main() {
    int integer = 0;
    float decimal = 100.1;
    char character = 'c';
    
    //printf("your_function returned: %f\n", your_function(integer, decimal, character));
    printf("your_pass_by_reference_function returned: %.2f\n", your_pass_by_reference_function(&integer, decimal, &character));
    printf("main integer: %d\n", integer);
    printf("main character: %c\n", character);
    return 0;
}

float your_pass_by_reference_function(int *integer_pointer, float decimal, char *character_pointer) {
    (*integer_pointer)++;
    (*character_pointer) = 'a';
    return decimal;
}

float your_function(int integer, float decimal, char character) { // pass by value
    printf("integer: %d\n", integer);
    printf("decimal: %f\n", decimal); // can be fixed with %.2f
    printf("character: %c\n", character);
    return decimal;
}

/*
function(&main_variable);
function(int *function_variable_pointer)
(*function_variable_pointer)++;
*/