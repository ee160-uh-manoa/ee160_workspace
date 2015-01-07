/*   File:  union.c
//   By:    The Awesome Students of EE160
//   Date:	Today :)
*/

#include <stdio.h>

// This program demonstrates using union
int main () {
  union user_input {
    char name[10];
    char gender;
    int age;
    float shoe_size;
  };
  
  union user_input input;
  
  printf("Please enter name:\n");
  scanf("%s", input.name);
  printf("Name: %s\n", input.name);
  
  printf("Please enter gender:\n");
  scanf(" %c", &input.gender);
  printf("Gender: %c\n", input.gender);
  
  printf("Please enter age:\n");
  scanf("%d", &input.age);
  printf("Age: %d\n", input.age);
  
  printf("Please enter shoe size:\n");
  scanf("%f", &input.shoe_size);
  printf("Shoe Size: %f\n", input.shoe_size);
  printf("Age: %d\n", input.age);
  
  return 0;
}