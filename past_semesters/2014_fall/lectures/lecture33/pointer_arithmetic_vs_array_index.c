/*   File:  pointer_arithmetic_vs_array_index.c
//   By:    The Awesome Students of EE160
//   Date:	Today :)
*/

#include <stdio.h>

// This program compares using pointer arithmetic and array indexing
int main () {
  int array[] = {0, 1, 2, 3, 4, 10};
  int i = 0;
  int *array_pointer = &array[0];
  
  printf("array[0]: %d\n", array[i]);
  printf("*array_pointer: %d\n", *array_pointer);  
  printf("array[0]: %d\n", array[i+5]);
  printf("*array_pointer: %d\n", *(array_pointer+5));  
  
  return 0;
}