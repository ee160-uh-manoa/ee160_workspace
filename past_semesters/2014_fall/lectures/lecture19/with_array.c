/*   File:  with_array.c
//   By:    The Awesome Students of EE160
//   Date:  Today :)
*/

#include <stdio.h>
#define LIST_SIZE 3
//#define LIST_SIZE 4

/*  This program uses an array to store data */
main() {
    int list_of_values[LIST_SIZE];
    int index;

    for (index = 0; index < LIST_SIZE; index++) {
        printf("Add a value:\n");
        scanf ("%d", &list_of_values[index]);
    }
    
    for (index = 0; index < LIST_SIZE; index++) {
        printf("The list of values are: %d \n", list_of_values[index]);
    }
}