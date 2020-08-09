// TITLE:       ex_4_8.c
// AUTHOR:      Phillip D. Douglas, Jr.
// PURPOSE:     Find the next largest even multiple for the following given values.
//
//                 i           j    
//              -------     -------
//              256         7
//              365         7
//              12,258      23
//              996         4

#include <stdio.h>

int main (void)
{
    int i[4] = {256, 365, 12258, 996};
    int j[4] = {7, 7, 23, 4};

    for (int k = 0; k < 4; k++)
    {
        printf ("i = %i, j = %i, next multiple is %i.\n",
            i[k], j[k], i[k] + j[k] - i[k] % j[k]);
    }

    return 0;
}
