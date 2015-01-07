#include<stdio.h>

#define MAX 10
#define ARRAY_OFFSET -1

main () {
  char string[MAX];
  int x = 1;
  
  printf("Enter in 10 letters or less:");
  scanf("%s", string);  
  
  //printf("stored string: %s\n", string);
  
  while (x <= MAX) {
    if (string[x + ARRAY_OFFSET] != '\0') {
      printf("%c\n", string[x + ARRAY_OFFSET]);
    }
    x++;
  }
  
  return 0;
}