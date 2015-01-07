/*   File:  ones_complement.c
//   By:    The Awesome Students of EE160
//   Date:	Today :)
*/

#include <stdio.h>

void printbits(unsigned char v);
  
// This program shows the result of the one's complement operator
int main () {
  unsigned byte = 0x5; // in binary form: 0000 0101
  
  printf("byte:  ");
  printbits(byte); // in binary form: 0000 0101
  printf("\n");
  printf("~byte: ");
  printbits(~byte); // in binary form: 1111 1010
  printf("\n");
  
  return 0;
}

// this function was pulled from http://stackoverflow.com/questions/699968/display-the-binary-representation-of-a-number-in-c
void printbits(unsigned char v) {
  int i; // for C89 compatability
  for(i = 7; i >= 0; i--) putchar('0' + ((v >> i) & 1));
}