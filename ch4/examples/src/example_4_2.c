// TITLE:       ex_4_2.c
// AUTHOR:      Phillip D. Douglas, Jr.
// PURPOSE:     Perform basic arithmetic operations

#include <stdio.h>

int main (void)
{
    int a = 100;
    int b = 2;
    int c = 25;
    int d = 4;
    int result;

    printf ("a = %i\n", a);
    printf ("b = %i\n", b);
    printf ("c = %i\n", c);
    printf ("d = %i\n", d);

    printf ("\n");

    result = a - b;     // subtraction
    printf ("a - b = %i\n", result);

    result = b * c;     // multiplication
    printf ("b * c = %i\n", result);

    result = a / c;     // division
    printf ("a / c = %i\n", result);

    result = a + b * c; // precedence
    printf ("a + b * c = %i\n", result);

    printf ("a * b + c * d = %i\n", a * b + c * d);

    return 0;
}
