/*   File:  arrays_are_pointers.c
//   By:    The Awesome Students of EE160
//   Date:	Today :)
*/

#include <stdio.h>

// This program demostrates that arrays are pointers
int main () {
  int array[] = {0, 1, 2, 3, 4, 5};
  
  printf("array: %p\n", array);
  printf("&array[0]: %p\n", &array[0]);
  
  return 0;
}