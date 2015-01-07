#include <stdio.h>

#define ARRAY_OFFSET -1

int main() {
  int array[] = { 1, 2, 3};
  int counter = 1;
  
  while (counter<=3) {
    printf("array[%d]: %d\n", counter, array[counter + ARRAY_OFFSET]);
    counter++;
  }
  
  return 0;
}
/*
array[0] //first element (counter is 0)
array[1] //seconde element (counter is 1)
array[2] //third element (counter is 2)

array[1-1] //first element (counter is 1)
array[2-1] //seconde element (counter is 2)
array[3-1] //third element (counter is 3)