#include <stdio.h>

#define MAX_CHARACTERS_ON_A_LINE 100

int main () {
  FILE *input_file_pointer = fopen("23_1.input", "r");
  
  if (input_file_pointer==NULL) {
    printf("file failed to open\n");
  } else {
    printf("file opened success\n");
    
    char word[MAX_CHARACTERS_ON_A_LINE];
    int mama_count = 0;
    
    while (fscanf(input_file_pointer, "%s", word) != EOF) {
      if(  word[0]=='m'
        && word[1]=='a'
        && word[2]=='m'
        && word[3]=='a') {
	mama_count++;
      }
    }

    printf("there are %d mamas\n", mama_count);
    
    fclose(input_file_pointer);
  }
  
  return 0;
}
