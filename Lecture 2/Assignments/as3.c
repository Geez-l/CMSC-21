#include <stdio.h>

/**************************************************************
This program solves for the value of the following:
***************************************************************/

int main(void)
{
    //declared the variables
    int i, j, k;

    /*assigned the values and prints
      the result */

    i= 3; j=4; k=5;
    printf("a) %d\n",i<j || ++j < k);

    i= 7; j= 8 ; k=9;
    printf("b) %d\n", i-7 && j++ < k);

    i= 7; j= 8 ; k=9;
    printf("c) %d\n",(i=j)||(j==k));
    printf("c.1) %d%d%d\n", i,j,k);

    i= j= k=1;
    printf("d) %d\n", ++i || ++j && ++k);
    printf("d.1) %d%d%d%\n", i,j,k);

    return 0;

}

