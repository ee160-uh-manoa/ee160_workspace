#include <stdio.h>

int main () {
  FILE *file_pointer;  
  char text[] = "word";
  int integer = 3;
  float decimal = 3.4;
  
  file_pointer = fopen("data/mytest.txt", "w");
  
  if (file_pointer == NULL) {
    printf("Error opening file\n");
  } else {
    printf("Successfully opened file\n");
    fprintf(file_pointer, "%s %d %.2f\n", text, integer, decimal);
    fclose(file_pointer);
  }
  
  return 0;
}