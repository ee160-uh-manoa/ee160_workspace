#include <stdio.h>
#include "includes/common_constants.h"

main() {
    printf("SOME_COMMON_CONSTANT: %d\n", SOME_COMMON_CONSTANT);
    printf("NUMBER_OF_DAYS_IN_A_YEAR: %d\n", NUMBER_OF_DAYS_IN_A_YEAR);
    printf("MAXIMUM_CAPACITY_OF_MSB114: %d\n", MAXIMUM_CAPACITY_OF_MSB114);
    printf("macros are really useful when constants are reused all over like here: %d %d %d\n", SOME_COMMON_CONSTANT, SOME_COMMON_CONSTANT, SOME_COMMON_CONSTANT);
}