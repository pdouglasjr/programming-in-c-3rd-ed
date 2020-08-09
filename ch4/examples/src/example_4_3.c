// TITLE:       ex_4_3.c
// AUTHOR:      Phillip D. Douglas, Jr.
// PURPOSE:     More examples with arithmetic operators.

#include <stdio.h>

int main (void)
{
    int a = 25;    
    int b = 2;

    float c = 25.0;
    float d = 2.0;

    printf ("a = %i\n", a);
    printf ("b = %i\n", b);
    printf ("c = %f\n", c);
    printf ("d = %f\n", d);

    printf ("\n");

    printf ("6 + a / 5 * b = %i\n", 6 + a / 5 * b);
    printf ("a / b * b = %i\n", a / b * b);
    printf ("c / d * d = %f\n", c / d * d);
    printf ("-a = %i\n", -a);

    return 0;
}
