/*   File:  else_if_vs_switch.c
//   By:    The Awesome Students of EE160
//   Date:	Today :)
*/

#include <stdio.h>

// This program compares using else if with switch
int main () {
  int number = 201;
  int another_number = 201;
  
  // else if can match ranges
  if ((0 <= number) && (number < 100)) {
    printf("The number is between 0 and 100, including 0\n");  
  } else if ((100 <= number) && (number < 200)) {
    printf("The number is between 100 and 200, including 100\n");
  } else if ((200 <= number) && (number < 300)) {
    printf("The number is between 200 and 300, including 200\n");
  } else {
    printf("The number is not (0 - 100), (100 - 200), or (200 - 300)\n");
    printf("The number is also not 0, 100, or 200\n");
  }
  
  // switch can only test for equality
  switch (number) {
    case 0:
      printf("The number is 0\n");  
      break;
    case 100:
      printf("The number is 100\n");
      break;
    case 201:
      printf("The number is 201\n");
      break;
    default:
      printf("The number is not 0, 100, or 200\n");
  }
  
  return 0;  
}