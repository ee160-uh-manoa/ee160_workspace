/*   File:  for_vs_while.c
//   By:    The Awesome Students of EE160
//   Date:	Today :)
*/

#include <stdio.h>
#define NUMBER_OF_LOOPS 3

// This program compares using a for loop with a while loop
int main () {
  int index; // both loops need to index to be declared prior
  int index2;
  
  for (index=1, index2=5; index<=index2; index++, index2--) {
    printf("This is loop #%d (index)\n", index);
    printf("This is loop #%d (index2)\n", index2);
  }
  
  return 0;  
}