// TITLE:       ex_5_5.c
// AUTHOR:      Phillip D. Douglas, Jr.
// PURPOSE:     Redo Exercise 5.5 with a while loop.

#include <stdio.h>

int main (void)
{
    int n = 0, two_to_the_n;
    
    printf ("TABLE OF POWERS OF TWO\n\n");
    printf (" n       2 to the n\n");
    printf ("---    --------------\n");

    two_to_the_n = 1;

    while (n <= 10)
    {
        printf ("%2i          %i\n", n, two_to_the_n);
        two_to_the_n *= 2;
        n++;
    }

    return 0;
}
