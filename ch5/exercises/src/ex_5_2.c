// TITLE:       ex_5_2.c
// AUTHOR:      Phillip D. Douglas, Jr.
// PURPOSE:     Print out integer values and their respective square.

#include <stdio.h>

int main (void)
{
    printf ("\n   n\t n^2\n");
    printf (" -----\t-----\n");
    
    for (int i = 1; i <= 10; i++)
    {
        printf ("  %2i\t%3i\n", i, i * i);
    }

    return 0;
}
