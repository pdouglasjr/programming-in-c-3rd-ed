// TITLE:       ex_5_9_1.c
// AUTHOR:      Phillip D. Douglas, Jr.
// PURPOSE:     Redo of Exercise 5.2 with a while loop.

#include <stdio.h>

int main (void)
{
    int i = 1;

    printf ("\n   n\t n^2\n");
    printf (" -----\t-----\n");

    while (i <= 10)
    {
        printf ("  %2i\t%3i\n", i, i * i);
        i++;
    }

    return 0;
}
