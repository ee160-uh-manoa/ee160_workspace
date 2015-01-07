#include <stdio.h>
#include <string.h>

#define MAX_LINE 100
#define CANDIDATE_STRING_LENGTH 4

int main () {
  FILE *file_pointer;  
  char line[MAX_LINE];
  char candidate_string[] = "mama";
  int word_count = 0;
  
  file_pointer = fopen("input.txt", "r");
  
  if (file_pointer == NULL) {
    printf("Error opening file\n");
  } else {
    printf("Successfully opened file\n");
    
    while (fgets(line, MAX_LINE, file_pointer)) {
      char *word_found_pointer;
      word_found_pointer = strstr(line, candidate_string);
      while (word_found_pointer) {
        word_count++;
        word_found_pointer = strstr(word_found_pointer+CANDIDATE_STRING_LENGTH, candidate_string);  
      }
    }    
  }
  
  fclose(file_pointer);
  printf("The word mama showed up %d time(s)\n", word_count);
  return 0;
}
