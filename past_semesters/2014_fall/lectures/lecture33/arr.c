#include <stdio.h>

int main () {
  int arr[2] = {1,2};
  
  printf("arr[0]: %d\n", arr[0]);
  printf("arr: %d\n", *arr);
  
  char str[] = "123";
  printf("atoi: %d\n", atoi(str+1));
  printf("try: %p\n", str+1);
  printf("try2: %c\n", *(str+1));
  
  //int *ap = arr;
  //printf("");
  
  return 0;
}