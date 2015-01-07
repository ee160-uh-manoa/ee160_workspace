/*   File:  teller_line.c
//   By:    The Awesome Students of EE160
//   Date:	Today :)
*/

#include <stdio.h>
#define MAX_NUMBER_OF_CUSTOMERS 10
#define SOMETHING_TO_START_LOOP 0
#define QUIT -1
#define SERVE_FIRST_CUSTOMER_IN_LINE 0
#define FIRST_POSITION_IN_LINE_WHEN_NOBODY_IS_IN_LINE 0
#define LAST_POSITION_IN_LINE_WHEN_NOBODY_IS_IN_LINE 0
#define FIRST_ARRAY_ELEMENT 0
#define NOBODY_IN_LINE_POSITION -1
#define ARRAY_OFFSET 1

void print_line();

// This program allows a manager to enter in teller line information and the program displays the status of the line
int main () {
  int input;
  int line[MAX_NUMBER_OF_CUSTOMERS];
  int *first_position_in_line;
  int *last_position_in_line;
  
  first_position_in_line = &line[FIRST_POSITION_IN_LINE_WHEN_NOBODY_IS_IN_LINE];
  last_position_in_line = &line[LAST_POSITION_IN_LINE_WHEN_NOBODY_IS_IN_LINE];
  
  do {
    printf("Please enter the next customer id to add a new customer\n");
    printf("Please enter %d id to serve the next customer\n", SERVE_FIRST_CUSTOMER_IN_LINE);
    printf("Please enter %d to end the program\n", QUIT);
    scanf("%d", &input);
    
    if (input == SERVE_FIRST_CUSTOMER_IN_LINE) {
      if (first_position_in_line != last_position_in_line) {
        *first_position_in_line = NOBODY_IN_LINE_POSITION;      
        first_position_in_line++;
      }
    } else {
      *last_position_in_line = input;
      last_position_in_line++;
    }
    
    // print line
    printf("\n");
    int display_counter = FIRST_ARRAY_ELEMENT;
    while (display_counter < MAX_NUMBER_OF_CUSTOMERS) {
      printf("%d, %d\n", display_counter, line[display_counter]);
      display_counter++;
    }
    printf("\n");

  } while (input != QUIT);
  return 0;
}