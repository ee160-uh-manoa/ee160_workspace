/*   File:  switch_incomplete.c
//   By:    The Awesome Students of EE160
//   Date:	Today :)
*/

#include <stdio.h>

// This program shows how to use the goto statement to implement a switch
int main () {
  int number;
  
  printf("Enter 1, 2, or 3\n");
  scanf("%d", &number);
  
  if(number == 1) {
    goto label1;
  }
  if(number == 2) {
    goto label2;
  }
  if(number == 3) {
    goto label3;
  }
  
  return 0;
  
  label1:
    printf("You've entered 1\n");
    return 0;
  label2:
    printf("You've entered 2\n");
    return 0;
  label3:
    printf("You've entered 3\n");
    return 0;
}  


/*
goto label;

// somewhere else in your program

label:
// do something

*/