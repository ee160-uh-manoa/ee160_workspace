#include <stdio.h>

main() {
    int first_number;
    int second_number;
    float div;

    printf ("Enter the first number: ");
    scanf ("%d", &first_number);
    printf ("The First number is %d \n", first_number);
    
    printf ("Enter the second number: ");
    scanf ("%d", &second_number);
    printf ("The second number is %d \n", second_number);
    
    div = (float)first_number / second_number;
    printf ("%d / %d = %f \n", first_number, second_number, div);
}