/*   File:  else_if_vs_nested_if.c
//   By:    The Awesome Students of EE160
//   Date:	Today :)
*/

#include <stdio.h>

// This program compares using else if with nested if statements
int main () {
  int number = 2;
  
  if (number == 0) {
    printf("The number is 0 (using nested ifs)\n");  
  } else {
    if (number == 1) {
      printf("The number is 1 (using nested ifs)\n");
    } else {
      if (number == 2) {
        printf("The number is 2 (using nested ifs)\n");
      } else {
        printf("The number is not 0, 1, or 2 (using nested ifs)\n");
      }
    }
  }
  
  if (number == 0) {
    printf("The number is 0 (using else if)\n");  
  } else if (number != 1) {
    printf("The number is not 1 (using else if)\n");
    //printf("The number is 1 (using else if)\n");
  } else if (number == 2) {
    printf("The number is 2 (using else if)\n");
  } else {
    printf("The number is not 0, 1, or 2 (using else if)\n");
  }
  
  return 0;  
}