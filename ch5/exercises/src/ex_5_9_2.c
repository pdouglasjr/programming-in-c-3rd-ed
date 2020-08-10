// TITLE:       ex_5_3.c
// AUTHOR:      Phillip D. Douglas, Jr.
// PURPOSE:     Redo Exercise 5.3 with a while loop.

#include <stdio.h>

int main (void)
{
    int triangularNumbers;

    int n = 5;

    printf ("  n\tTriangular Numbers\n");
    printf ("-----\t------------------\n");

    while (n <= 50)
    {
        printf (" %2i\t\t%4i\n", n, n * (n + 1) / 2);
        n += 5;     
    }

    return 0;
}
