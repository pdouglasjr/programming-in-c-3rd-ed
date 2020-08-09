// TITLE:       ex_4_4.c
// AUTHOR:      Phillip D. Douglas, Jr.
// PURPOSE:     Converts 27 degrees from Fahrenheit (F) to degrees Celsius (C)

#include <stdio.h>

int main (void)
{
    float fahr = 27.0;
    float celsius = (fahr - 32) / 1.8;

    printf ("%f degrees Fahrenheit (F) equals %f degrees Celsius (C).\n", fahr, celsius);

    return 0;
}
