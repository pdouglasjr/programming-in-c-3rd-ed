// TITLE:       ex_5_3.c
// AUTHOR:      Phillip D. Douglas, Jr.
// PURPOSE:     Generate a table of triangular numbers

#include <stdio.h>

int main (void)
{
    int triangularNumbers;

    printf ("  n\tTriangular Numbers\n");
    printf ("-----\t------------------\n");

    for (int n = 5; n <= 50; n += 5)
    {
        printf (" %2i\t\t%4i\n", n, n * (n + 1) / 2);     
    }
}
