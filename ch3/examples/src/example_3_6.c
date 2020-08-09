// TITLE:       example_3_6.c
// AUTHOR:      Phillip D. Douglas, Jr.
// PURPOSE:     This program addds two integer values displays the results.

#include <stdio.h>

int main()
{
    /* Declare variables */
    int value1, value2, sum;
    
    /* Assign values and compute the result */
    value1 = 50;
    value2 = 25;
    sum = value1 + value2;

    /* Display the result */
    printf("The sum of %i and %i is %i\n", value1, value2, sum);

    return 0;
}
