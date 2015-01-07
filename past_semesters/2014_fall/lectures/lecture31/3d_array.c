/*   File:  2d_arrays.c
//   By:    The Awesome Students of EE160
//   Date:  Today :)
*/

#include <stdio.h>
#define MAX_ROWS 3
#define MAX_COLS 2
#define MAX_TABS 2

/*  This program stores declares, initializes, and uses a 2D array */
int main() {
  int book_of_values[MAX_TABS][MAX_ROWS][MAX_COLS] = {
    {
      {11, 12},
      {13, 14},
      {15, 16}
    },
    {
      {21, 22},
      {23, 24},
      {25, 26}    
    }
  };
  
  printf("Table 1:\n");
  printf("[0][0][0]: %d, [0][0][1]: %d\n", book_of_values[0][0][0], book_of_values[0][0][1]);
  printf("[0][1][0]: %d, [0][1][1]: %d\n", book_of_values[0][1][0], book_of_values[0][1][1]);
  printf("[0][2][0]: %d, [0][2][1]: %d\n", book_of_values[0][2][0], book_of_values[0][2][1]);
  
  printf("Table 2:\n");;
  printf("[1][0][0]: %d, [1][0][1]: %d\n", book_of_values[1][0][0], book_of_values[1][0][1]);
  printf("[1][1][0]: %d, [1][1][1]: %d\n", book_of_values[1][1][0], book_of_values[1][1][1]);
  printf("[1][2][0]: %d, [1][2][1]: %d\n", book_of_values[1][2][0], book_of_values[1][2][1]);
  
  return 0;
}

//visualizing 1D Array vs 2D Array:
//https://docs.google.com/spreadsheets/d/1gD-Jww5cQYu-P-i0KMPqT1mXY6ybOAQqdJOuCbp4GFA/edit?usp=sharing