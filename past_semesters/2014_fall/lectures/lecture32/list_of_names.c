#include <stdio.h>

int main () {
  
  char names[5][10];
  
  int counter;
  for(counter=0;counter<=4;counter++) {
    printf("enter in name\n");
    scanf("%s", names[counter]);
  }
  
  for(counter=0;counter<=4;counter++) {
    printf("%s\n", names[counter]);
  }
  
  return 0;
}

//https://docs.google.com/spreadsheets/d/1aorrgp073t_0e7hbyezUveydJN8am29baCGSBeP8lWM/edit?usp=sharing