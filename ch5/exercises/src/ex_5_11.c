// TITLE:       ex_5_11.c
// AUTHOR:      Phillip D. Douglas, Jr.
// PURPOSE:     Program that calulates the sum o fthe digits of an integer.

#include <stdio.h>

int main (void)
{   
    int number, result = 0;
    
    printf ("Enter a number: ");
    scanf ("%i", &number);

    printf ("The sum of the integers in %i is equal to ", number); 

    do
    {   
        result += number % 10;
        number /= 10;
    } while (number != 0);

    printf ("%i\n", result);

    return 0;
}
