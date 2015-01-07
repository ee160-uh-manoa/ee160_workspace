/*   File:  continue.c
//   By:    The Awesome Students of EE160
//   Date:	Today :)
*/

#include <stdio.h>

// This program shows how to use the continue statement
int main () {
  int number;
  
  for (number=0; number <= 5; number++) {
    if (number == 3) {
      //continue;
    }
    printf("number: %d\n", number);
  }
  printf("You are out of the loop\n");
  
  return 0;
}  