/*   File:  shift.c
//   By:    The Awesome Students of EE160
//   Date:	Today :)
*/

#include <stdio.h>

void printbits(unsigned char v);
  
// This program demonstrates how masking works
int main () {
  unsigned byte = 0x99; // in binary form: 1001 1001
  
  printf("byte:%6c", ' ');
  printbits(byte);
  printf("\n");
  printf("byte << 1: ");
  printbits(byte << 1); // in binary form: 0011 0010
  printf("\n");
  
  printf("byte:%6c", ' ');
  printbits(byte);
  printf("\n");
  printf("byte >> 1: ");
  printbits(byte >> 1); // in binary form: 0100 1100
  printf("\n");
  
  return 0;
}

// this function was pulled from http://stackoverflow.com/questions/699968/display-the-binary-representation-of-a-number-in-c
void printbits(unsigned char v) {
  int i; // for C89 compatability
  for(i = 7; i >= 0; i--) putchar('0' + ((v >> i) & 1));
}