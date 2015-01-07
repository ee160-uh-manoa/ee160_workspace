#include <stdio.h>
#include <math.h>

#define MAX_STRING_SIZE 50
#define MAX_RECORDS 50000
#define NUL '\0'

int str_to_num(char str[]);
int ten_raised_to(int exponent);
  
int main () {
  FILE *file_pointer;  
  int ids[MAX_RECORDS];
  int hours[MAX_RECORDS];
  int minutes[MAX_RECORDS];
  int seconds[MAX_RECORDS];
  float x_positions[MAX_RECORDS];
  float y_positions[MAX_RECORDS];
  int index = 0;
    
  char hour_text[MAX_STRING_SIZE];  
  char minute_text[MAX_STRING_SIZE];  
  char second_text[MAX_STRING_SIZE];  
  char text2[MAX_STRING_SIZE];  
  
  file_pointer = fopen("datasets/uber_sample.tsv", "r");
  
  if (file_pointer == NULL) {
    printf("Error opening file\n");
  } else {
    printf("Successfully opened file\n");
    while (fscanf(file_pointer, "%d %s %f %f", &ids[index], text2, &x_positions[index], &y_positions[index]) != EOF) {
      hour_text[0] = text2[11];
      hour_text[1] = text2[12];
      hour_text[2] = NUL;
      hours[index] = str_to_num(hour_text);
      
      minute_text[0] = text2[14];
      minute_text[1] = text2[15];
      minute_text[2] = NUL;
      minutes[index] = str_to_num(minute_text);
      
      second_text[0] = text2[17];
      second_text[1] = text2[18];
      second_text[2] = NUL;
      seconds[index] = str_to_num(second_text);
      
      index++;
    }
    
    int i;
    for(i = 0; i <= index; i++) {
      printf("%d %d %d %d %f %f\n", ids[i], hours[i], minutes[i], seconds[i], x_positions[i], y_positions[i]);
    }
    printf ("\ntotal: %d\n", index);
    
    fclose(file_pointer);
  }
  
  return 0;
}

int str_to_num(char str[MAX_STRING_SIZE]) {
  int i;
  int num = 0;
  int number_of_places = 0;
  
  while (str[number_of_places] != NUL) {
    number_of_places++;
  }

  for(i=0; i<=number_of_places; i++) {
    int digit;
    
    switch (str[i]) {
      case '0':
        num += 0 * ten_raised_to(number_of_places - i - 1);
        //num += 0 * pow(10, number_of_places - i - 1);
        break;
      case '1':
        num += 1 * ten_raised_to(number_of_places - i - 1);
        //num += 1 * pow(10, number_of_places - i - 1);
        break;
      case '2':
        num += 2 * ten_raised_to(number_of_places - i - 1);
        //num += 2 * pow(10, number_of_places - i - 1);
        break;
      case '3':
        num += 3 * ten_raised_to(number_of_places - i - 1);
        //num += 3 * pow(10, number_of_places - i - 1);
        break;
      case '4':
        num += 4 * ten_raised_to(number_of_places - i - 1);
        //num += 4 * pow(10, number_of_places - i - 1);
        break;
      case '5':
        num += 5 * ten_raised_to(number_of_places - i - 1);
        //num += 5 * pow(10, number_of_places - i - 1);
        break;
      case '6':
        num += 6 * ten_raised_to(number_of_places - i - 1);
        //num += 6 * pow(10, number_of_places - i - 1);
        break;
      case '7':
        num += 7 * ten_raised_to(number_of_places - i - 1);
        //num += 7 * pow(10, number_of_places - i - 1);
        break;
      case '8':
        num += 8 * ten_raised_to(number_of_places - i - 1);
        //num += 8 * pow(10, number_of_places - i - 1);
        break;
      case '9':
        num += 9 * ten_raised_to(number_of_places - i - 1);
        //num += 9 * pow(10, number_of_places - i - 1);
        break;
    }
  }  
  
  return num;
}

int ten_raised_to(int exponent) {
  int i;
  int result = 1;
  for(i=1; i<=exponent; i++) {
    result *= 10;
  }
  
  return result;
}