#include <stdio.h>

main() {
    printf ("4 - 3 - 2 = %d\n", 4 - 3 - 2);
    printf ("(4 - 3) - 2 = %d\n", (4 - 3) - 2);
    printf ("4 - (3 - 2) = %d\n", 4 - (3 - 2));
    
    int result_of_first_operation = 3 - 2;
    printf("%d", result_of_first_operation);
    int end_result = 4 - result_of_first_operation;
    printf ("4 - (3 - 2) = %d\n", end_result);
}