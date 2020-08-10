// TITLE:       ex_5_4.c
// AUTHOR:      Phillip D. Douglas, Jr.
// PURPOSE:     Redo Exercise 5.4 with a while loop.

#include <stdio.h>

int main (void)
{
    int num, result = 1;

    printf ("Enter a number: ");
    scanf ("%i", &num);

    printf ("%i! = ", num);
    
    while ( num > 0 )
    {
        result *= num;
        num--;
    }

    printf ("%i\n", result);

    return 0;
}
