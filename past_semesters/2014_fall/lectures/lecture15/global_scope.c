/*   File:  global_scope.c
//   By:    The Awesome Class of EE160
//   Date:  Today :)
*/

#include <stdio.h>
void function();

// global variable to entire program
int variable = 10;

/*  This program prints out variables at different points in the program to see which variables are in scope  */
main() {
  // local variables to main
  //int variable = 20;
  printf ("[In main] variable: %i \n", variable);
  function();
}

/*  this function will test how variables are scoped  */
void function() {
  //variable = variable + 1000; // don't do this
  printf ("[In function] variable: %i \n", variable);
}