// TITLE:       ex_5_7.c
// AUTHOR:      Phillip D. Douglas, Jr.
// PURPOSE:     Exercise 5.7

#include <stdio.h>

int main (void)
{
    int dollars, cents, count;

    for ( count = 1; count <= 10; ++count )
    {
        printf ("Enter dollars: ");
        scanf ("%i", &dollars);

        printf ("Enter cents: ");
        scanf ("%i", &cents);

        printf ("$%.2i.%.2i\n\n", dollars, cents);
    }

    return 0;
}
