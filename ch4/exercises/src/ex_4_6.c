// TITLE:       ex_4_6.c
// AUTHOR:      Phillip D. Douglas, Jr.
// PURPOSE:     Evaluate a polynomial and print the results.

#include <stdio.h>

float exponent(float base, int exp);

int main (void)
{
    float x = 2.55;

    float result;

    result  = 3 * exponent(x,3) - 5 * exponent(x,2) + 6;

    printf ("%f\n", result);

    return 0;
}

float exponent(float base, int exp)
{
    float result = 1;

    while (exp != 0) {
        result *= base;
        --exp;
    }
    return result;
}

