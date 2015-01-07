#include <stdio.h>

#define DEBUG

main() {
  int width = 3;
  int height = 4;
  
  #ifdef DEBUG
    printf("[DEBUG] width is: %d\n", width);
    printf("[DEBUG] height is: %d\n", height);
  #endif
  
  printf("The area is: %d\n", width * height);
}