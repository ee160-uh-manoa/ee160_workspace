#include <stdio.h>

main() {
  char continue_flag = 'y';

  while (continue_flag == 'y') {
    printf ("Hip, hip, hooray!\n");
    
    printf ("Do you want to do another cheer?\n");
    printf ("y = yes, n = no\n");
    scanf (" %c", &continue_flag);
    if (continue_flag == 'n') {
      printf ("That was the last cheer. :(\n");
    }
    //printf ("continue_flag: %c\n", continue_flag); // for debugging
  }
}