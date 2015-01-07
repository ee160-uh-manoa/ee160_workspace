#include <stdio.h>

main() {
  int counter; //declaring

  counter = 1; //initializing
  while (counter <= 3) { //running code until counter is above 3
  
  
  
    printf ("Hip, hip, hooray!\n");
    printf ("counter is: %d\n", counter);
    if (counter == 3) {
      printf ("That was the last cheer. :(\n");
    }
    
    counter = counter + 1; //incrementing the counter
  
  }
}