#include <stdio.h>

int main () {
  FILE *input_file_pointer;  
  FILE *output_file_pointer;  
  char line[100];
  
  input_file_pointer = fopen("data/input.txt", "r");
  output_file_pointer = fopen("data/output.txt", "w");
  
  if (input_file_pointer == NULL) {
    printf("Error opening file\n");
  } else {
    printf("Successfully opened file\n");
    while (fscanf(input_file_pointer, "%s", line) != EOF) {
      fprintf(output_file_pointer, "%s", line););
    }
    
    fclose(input_file_pointer);
    fclose(output_file_pointer);
  }
  
  return 0;
}