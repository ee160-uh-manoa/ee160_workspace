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
    while (fscanf(file_pointer, "%s %s", text1, text2) != EOF) {
      printf("%s\n", text1);
      printf("%s\n", text2);  
    }
    fclose(file_pointer);
  }
  
  printf("EOF: %d\n", EOF);
  printf("NULL: %p\n", NULL);
  
  return 0;
}