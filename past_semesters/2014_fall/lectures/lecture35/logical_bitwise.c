/*   File:  logical_bitwise.c
//   By:    The Awesome Students of EE160
//   Date:	Today :)
*/

#include <stdio.h>

void printbits(unsigned char v);
  
// This program shows the result of the logical bitwise operator
int main () {
  unsigned byte1 = 0x5; // in binary form: 0000 0101
  unsigned byte2 = 0x6; // in binary form: 0000 0110
  
  printf("byte1:%19c", ' ');
  printbits(byte1);
  printf("\n");
  printf("byte2:%19c", ' ');
  printbits(byte2);
  printf("\n");
  printf("bitwise and (&):%9c", ' ');
  printbits(byte1 & byte2); // in binary form: 0000 0100
  printf("\n");
  printf("bitwise or (|):%10c", ' ');
  printbits(byte1 | byte2); // in binary form: 0000 0111
  printf("\n");
  printf("bitwise exclusive or (^):");
  printbits(byte1 ^ byte2); // in binary form: 0000 0011
  printf("\n");
  
  return 0;
}

// this function was pulled from http://stackoverflow.com/questions/699968/display-the-binary-representation-of-a-number-in-c
void printbits(unsigned char v) {
  int i; // for C89 compatability
  for(i = 7; i >= 0; i--) putchar('0' + ((v >> i) & 1));
}