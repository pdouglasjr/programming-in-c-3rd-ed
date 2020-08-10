// TITLE:       ex_5_4.c
// AUTHOR:      Phillip D. Douglas, Jr.
// PURPOSE:     Perform factorial calculations.

#include <stdio.h>

int main (void)
{
    int number, result = 1;

    printf ("Enter a number: ");
    scanf ("%i", &number);

    for (int n = number; n > 0; n--)
    {
        result *= n;
    }

    printf ("%i! = %i\n", number, result);

    return 0;
}
