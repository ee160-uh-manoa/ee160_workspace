/*   File:  logical_operators_vs_nested_if.c
//   By:    The Awesome Students of EE160
//   Date:	Today :)
*/

#include <stdio.h>

// This program compares using logical operators with nested if statements
int main() {
  int number = -50;
  
  if (number >= 0) {
    if (number <= 100) {
      printf("This number is between 0 and 100 (using nested ifs)\n");
    } else {
      printf("This number is greater than 100\n");
    }
  } else {
    printf("This number is less than 0\n");
  }
  
  if ((0 <= number) && (number <= 100)) {
    printf("This number is between 0 and 100 (using logical operators)\n");
  } else {
    printf("This number could be less than 0 or greater than 100\n");
  }

  return 0;  
}