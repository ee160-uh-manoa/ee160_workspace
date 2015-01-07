/*   File:  mask.c
//   By:    The Awesome Students of EE160
//   Date:	Today :)
*/

#include <stdio.h>

void printbits(unsigned char v);
  
// This program demonstrates how masking works
int main () {
  unsigned byte = 0x55; // in binary form: 0101 0101
  unsigned mask = 0xF0; // in binary form: 1111 0000
  
  printf("byte:%20c", ' ');
  printbits(byte);
  printf("\n");
  printf("mask:%20c", ' ');
  printbits(mask);
  printf("\n");
  
  printf("bitwise and (&):%9c", ' ');
  printbits(byte & mask);
  printf("\n%25c", ' ');
  printbits(byte & mask & mask);
  printf("\n");
  printf("bitwise or (|):%10c", ' ');
  printbits(byte | mask);
  printf("\n%25c", ' ');
  printbits(byte | mask | mask);
  printf("\n");
  printf("bitwise exclusive or (^):");
  printbits(byte ^ mask);
  printf("\n%25c", ' ');
  printbits(byte ^ mask ^ mask);
  printf("\n");
  
  return 0;
}

// this function was pulled from http://stackoverflow.com/questions/699968/display-the-binary-representation-of-a-number-in-c
void printbits(unsigned char v) {
  int i; // for C89 compatability
  for(i = 7; i >= 0; i--) putchar('0' + ((v >> i) & 1));
}