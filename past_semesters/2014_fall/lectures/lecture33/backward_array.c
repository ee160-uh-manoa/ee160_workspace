/*   File:  backward_array.c
//   By:    The Awesome Students of EE160
//   Date:	Today :)
*/

#include <stdio.h>
#define SIZE 6

// This program prints an array backwards
int main () {
  int array[SIZE] = {0, 1, 2, 3, 4, 5};
  int *array_pointer = &array[SIZE - 1];
  
  int count = 0;
  while (count <= SIZE - 1) {
    printf("%d\n", *(array_pointer - count));
    //printf("try: %d\n", array);
    //printf("try2: %d\n", array[0]);
    count++;
  }
  
  return 0;
}

/*
count:
0
1
2
3
4
5
*/