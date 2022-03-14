#include<stdio.h>

/**************************************************************
This program provides the reverse of the input by the user.
***************************************************************/

int main(void)

{
  //declaring the variables
  int n, dig_1, dig_2, rev, orig;

  // asks the user for the input
  printf("Enter a 2-digit number:\n ");
  scanf("%d",&n);

  /*the values was stored in the variable
  orig */
  /*utilized modulo operator which will take
  the remainder of the number */
  /*divided the number by 10 which takes the
  whole number */

  orig = n;
  dig_1 = n %10;
  n= n/10;
  dig_2= n %10;
  n=n/10;

  /*multiplied by tens, ones took the sum of the
  two and store in the variable named rev */

  /*for example, user input = 57; dig_1= 57%10
  q = 5; r. 7 then 57/10 = 5 ; dig_2 = 5%10
  q=0; r=5 ; reverse= 7(10) + 5(1) = 75*/

  //result was printed

  rev = dig_1*10 + dig_2*1;
  printf("\nThe reversed number of %d\n",orig);
  printf(" is %d\n",rev);
  printf(" \n");

}
