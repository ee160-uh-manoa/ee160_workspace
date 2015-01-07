#include <stdio.h>

main () {

  int counter;
  counter = 1;
  
  printf("Let's count to 100! \n");

  //while (counter != 101) {
  //while (counter < 101) { // count to below 101
  while (counter <= 100) { // count to 100
    printf(" %i \n", counter);
    counter = counter + 1;
  }
}