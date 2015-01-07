#include <stdio.h>

int main() {
  int variable = 2;
  int array[2];
  
  array[-1] = 10;
  array[0]  = 20;
  array[1]  = 30;
  
  printf("%d\n", variable); // prints out 10 intead of 1
  return 0;
}