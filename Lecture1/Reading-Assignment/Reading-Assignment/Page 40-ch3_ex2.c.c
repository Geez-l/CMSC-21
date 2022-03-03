#include <stdio.h>

int main(void)
{
   /*creating a variable and giving
   specification to it */

   int i;
   float x;

   //assigning values to the variables

   i= 40;
   x= 839.21f;

   //printing the values
   printf("|%d|%5d|%-5d|%5.3d|\n", i,i,i,i);
   printf("|%10.3f|%10.3e|%-10g|\n",x,x,x);

   return 0;
}
