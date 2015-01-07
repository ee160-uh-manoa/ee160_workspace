/*   File:  for_vs_while.c
//   By:    The Awesome Students of EE160
//   Date:	Today :)
*/

#include <stdio.h>
#define NUMBER_OF_LOOPS 3

// This program compares using a for loop with a while loop
int main () {
  int index; // both loops need to index to be declared prior
  
  /*
  // while loop
  index = 1;
  while (index <= NUMBER_OF_LOOPS) {
    printf("This is loop #%d (using while)\n", index);
    index++;
  }
  printf("index: %d\n", index);
  ////
  */
  
  // for loop
  for (index=1; index<=NUMBER_OF_LOOPS; index++) {
    printf("This is loop #%d (using for)\n", index);
  }
  printf("index: %d\n", index);
  ////
  
  return 0;  
}