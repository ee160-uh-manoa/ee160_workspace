/*   File:  goto.c
//   By:    The Awesome Students of EE160
//   Date:	Today :)
*/

#include <stdio.h>

// This program shows how to use the goto statement
int main () {
  int number;
  int number2;
  
  for (number2=0; number2<=3; number2++) {
    for (number=0; number <= 5; number++) {
      if (number == 3) {
        goto out_of_both_loops;
      }
      printf("number: %d\n", number);
    }
    printf("number2: %d\n", number2);
  }  
  out_of_both_loops: printf ("You are out of both loops\n");
  printf("after label\n");
  return 0;
}  