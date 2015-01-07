#include<stdio.h>

main () {
  char string[10];
  int x = 0;
  
  printf("Enter in 10 letters or less:");
  scanf("%s", string);
  
  while (x <=10) {
    if (string[x] !='\0') {
      printf("%c\n", string[x]);
      x++;
    }
  }