// TITLE:       program_3_5.c
// AUTHOR:      Phillip D. Douglas, Jr.
// PURPOSE:     Calculate the sum of two numbers and print the result.

#include <stdio.h>

int main()
{
    // Declare and initialize two integer variables
    int value1 = 50;
    int value2 = 25;

    // Declare an integer variable to hold the sum of the two variables declared above.
    int sum;

    // Calculate the sum of two numbers
    sum = value1 + value2;

    // Print results to the screen.
    printf("The sum of %i and %i is %i.\n", value1, value2, sum);

    return 0;
}
