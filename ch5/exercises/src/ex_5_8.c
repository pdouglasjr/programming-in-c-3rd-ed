// TITLE:       ex_5_8.c
// AUTHOR:      Phillip D. Douglas, Jr.
// PURPOSE:     Prompt user for five nonnegative integers and calculate their triangular
//              numbers.

#include <stdio.h>

int main (void)
{
    int n = 1, number;

    for ( ; n < 6; n++)
    {
        printf ("Enter a number: ");
        scanf ("%i", &number);

        printf ("The triangular number of %i is %i.\n", number, number * (number + 1) / 2);
    }

    return 0;
}
