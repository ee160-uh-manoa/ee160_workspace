#include <stdio.h>

main() {
    int a;
    int b;
    int c;
    int result;

    printf ("Enter a: ");
    scanf ("%d", &a);
    printf ("a is %d \n", a);
    
    printf ("Enter b: ");
    scanf ("%d", &b);
    printf ("b is %d \n", b);
    
    printf ("Enter c: ");
    scanf ("%d", &c);
    printf ("c is %d \n", c);
    
    int numerator;
    int denominator;
    
    numerator = -b+((b*b)-(4*a*c));
    denominator = 2*a;
    
    float quotient;
    quotient = (float)numerator / denominator;
    
    printf ("The quotient is: %f \n", quotient);
}