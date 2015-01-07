/*   File:  logical_operators.c
//   By:    The Awesome Students of EE160
//   Date:	Today :)
*/

#include <stdio.h>

// This program shows how logical operators are interpretted in C
int main() {
  printf("T && T: %d\n", (1 == 1) && (1 == 1));
  printf("T && F: %d\n", (1 == 1) && (1 != 1));
  printf("F && T: %d\n", (1 != 1) && (1 == 1));
  printf("F && F: %d\n", (1 != 1) && (1 != 1));
  printf("\n");
  printf("T || T: %d\n", (1 == 1) || (1 == 1));
  printf("T || F: %d\n", (1 == 1) || (1 != 1));
  printf("F || T: %d\n", (1 != 1) || (1 == 1));
  printf("F || F: %d\n", (1 != 1) || (1 != 1));
  return 0;
}