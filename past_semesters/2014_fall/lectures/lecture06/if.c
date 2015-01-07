#include <stdio.h>

main() {
  
  int number;
  
  printf("Enter a magical number: ");
  scanf("%d", &number);
  
  if (number >= 100) {
    if (number <= 102) {
      printf("Your number is very magical! \n");
    }
  } else {
    printf("Your number needs more magic :( \n");
  }
}



/*
#include <stdio.h>

main() {
  int number;

  printf ("Enter a magical number: ");
  scanf ("%d", &number);
  
  if (number >= 100) {
    printf ("Your number is very magical! \n");
  } else {
    printf ("Your number needs more magic :( \n");    
  }
}

*/