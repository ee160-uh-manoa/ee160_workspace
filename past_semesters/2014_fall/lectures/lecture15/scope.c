/*   File:  scope.c
//   By:    The Awesome Class of EE160
//   Date:  Today :)
*/

#include <stdio.h>

int function (int passed_in_variable);

/*  This program prints out variables at different points in the program to see which variables are in scope  */
main() {
  // local variables to main
  int variable = 20;
  
  printf ("[Start of Main] variable: %i \n", variable);
  function (variable);
  printf ("[End of Main] variable: %i \n", variable);
}

/*  this function will test how arguments are scoped  */
int function (int passed_in_variable) {
  // local variables to function1
  int variable = 30;
  
  printf ("[Start of function1] variable: %i \n", variable);
  printf ("[Start of function1] passed_in_variable: %i \n", passed_in_variable);
  variable = variable + 5;
  passed_in_variable = passed_in_variable + 5;
  printf ("[End of function1] variable: %i \n", variable);
  printf ("[End of function1] passed_in_variable: %i \n", passed_in_variable);
}