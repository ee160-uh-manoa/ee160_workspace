/*   File:  simple_arrays.c
//   By:    The Awesome Students of EE160
//   Date:  Today :)
*/

#include <stdio.h>

/*  This program stores declares, initializes, and uses simple arrays */
main() {
  int list_of_values[3];
  list_of_values[0] = 1;
  list_of_values[1] = 2;
  list_of_values[2] = 3;
  
  printf("list_of_values[0]: %d\n", list_of_values[0]);
  printf("list_of_values[1]: %d\n", list_of_values[1]);
  printf("list_of_values[2]: %d\n", list_of_values[2]);
}