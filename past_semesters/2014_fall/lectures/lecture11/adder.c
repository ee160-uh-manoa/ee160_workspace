#include <stdio.h>

main() {
    int first_number;
    int second_number;
    int sum;

    printf ("Enter the first number: ");
    scanf ("%d", &first_number);
    printf ("The First number is %d \n", first_number);
    
    printf ("Enter the second number: ");
    scanf ("%d", &second_number);
    printf ("The second number is %d \n", second_number);
    
    printf ("Adding: %d + %d\n", first_number, second_number);
    sum = first_number + second_number;
    printf ("Their sum is: %d \n", sum);
    
    printf ("%d + %d = %d \n", first_number, second_number, first_number + second_number);
    printf ("%d + %d = %d \n", first_number, second_number, sum);
}