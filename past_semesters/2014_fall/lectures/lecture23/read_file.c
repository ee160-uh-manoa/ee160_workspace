#include <stdio.h>

#define MAX_STRING_SIZE 10

int main () {
  FILE *file_pointer;  
  char text1[MAX_STRING_SIZE];
  char text2[MAX_STRING_SIZE];
  
  file_pointer = fopen("data/test.txt", "r");
  
  if (file_pointer == NULL) {
    printf("Error opening file\n");
  } else {
    printf("Successfully opened file\n");
    fscanf(file_pointer, "%s %s", text1, text2);
    printf("%s\n", text1);
    printf("%s\n", text2);
    fscanf(file_pointer, "%s %s", text1, text2);
    printf("%s\n", text1);
    printf("%s\n", text2);
    
    fclose(file_pointer);
  }
  
  return 0;
}