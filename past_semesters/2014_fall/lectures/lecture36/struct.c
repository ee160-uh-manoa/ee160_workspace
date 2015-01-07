/*   File:  struct.c
//   By:    The Awesome Students of EE160
//   Date:	Today :)
*/

#include <stdio.h>

// This program demonstrates using struct
int main () {
  struct person {
    char name[10];
    char gender;
    int age;
    float shoe_size;
  };
  
  struct person person1;
  
  printf("Please enter name:\n");
  scanf("%s", person1.name);
  printf("Please enter gender:\n");
  scanf(" %c", &person1.gender);
  printf("Please enter age:\n");
  scanf("%d", &person1.age);
  printf("Please enter shoe size:\n");
  scanf("%f", &person1.shoe_size);
  
  printf("Name: %s\n", person1.name);
  printf("Gender: %c\n", person1.gender);
  printf("Age: %d\n", person1.age);
  printf("Shoe Size: %f\n", person1.shoe_size);
  
  return 0;
}