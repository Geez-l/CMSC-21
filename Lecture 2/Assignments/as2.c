#include<stdio.h>

/**************************************************************
This program provides the reverse of the input by the user.
***************************************************************/

int main(void)

{
   //declaring the variables
  int n, dig_1, dig_2, dig_3, rev, orig;

  // asks the user for the input
  printf("Enter a 3-digit number:\n ");
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
  dig_3 = n%10;
  n=n/10;

  /*multiplied by one hundred, ten and one; took the sum
  of the three variables and store in the variable named rev */

  /*for example, user input = 357; dig_1= 357%10
  q = 35; r. 7 then 357/10 = 35 ; dig_2 = 35%10
  q=3; r.5 ; dig_3= 3%10 = q=0 ; r.3
  reverse= 7(100) + 5(10) + 3(1)= 753*/

  //result was printed
  rev = dig_1*100 + dig_2*10 + dig_3*1;
  printf("\nThe reversed number of %d",orig);
  printf(" is %d\n",rev);

}
