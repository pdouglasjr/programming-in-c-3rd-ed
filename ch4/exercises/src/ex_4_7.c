// TITLE:       ex_4_7.c
// AUTHOR:      Phillip D. Douglas, Jr.
// PURPOSE:     Make use of the the exponential format to evalutate
//              an arithmetic expression and display the result in
//              exponential format.

#include <stdio.h>

int main (void)
{
    float x;

    x = (3.31e-8 * 2.01e-7) / (7.16e-6 + 2.01e-8);

    printf ("\n%e\n", x);

    return 0;
}
