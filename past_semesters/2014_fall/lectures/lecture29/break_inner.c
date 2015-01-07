/*   File:  break.c
//   By:    The Awesome Students of EE160
//   Date:	Today :)
*/

#include <stdio.h>

// This program shows how to use the break statement
int main () {
  int number;
  int number2;
  
  for (number2=0; number2<=3; number2++) {
    for (number=0; number <= 5; number++) {
      if (number == 3) {
        break;
      }
      printf("number: %d\n", number);
    }
    printf("number2: %d\n", number2);
  }
  printf("You are out of both loops\n");
  
  return 0;
}  