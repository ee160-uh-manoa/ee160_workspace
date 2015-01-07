/*   File:  do_while_vs_while_no_initialization.c
//   By:    The Awesome Students of EE160
//   Date:	Today :)
*/

#include <stdio.h>
#define NUMBER_OF_LOOPS 3

// This program compares the initialization process when using a do while loop vs when using a while loop
int main () {
  char input;
  
  // do while loop
  // do while loop does not require initializing input to an arbitrary value
  do {
    printf("Do you want to continue? (using do while)\n");
    scanf(" %c", &input);
  } while (input != 'n');
  ////
  
  printf("\n\n");
  
  // while loop
  input = 'a'; // while loop requires this
  while (input != 'n') {
    printf("Do you want to continue? (using while)\n");
    scanf(" %c", &input);
  }
  ////
  
  return 0;  
}