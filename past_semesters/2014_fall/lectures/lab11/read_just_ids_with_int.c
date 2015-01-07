#include <stdio.h>

int main () {
  FILE *input_file = fopen("datasets/uber_sample.tsv", "r");
  int ids;
  char datetime[100];
  float latitude[400];
  float longitude[400];
  
  if(input_file != NULL) {
    printf("File opened successfully\n");
    
    int index = 0;
    fscanf(input_file, "%d", &ids);
    
    printf("ids: %d\n", ids);
    
    fclose(input_file);
  } else {
    printf("File failed to open\n");
  }
  
  return 0;
}