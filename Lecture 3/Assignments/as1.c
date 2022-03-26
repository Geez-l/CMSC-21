#include <stdio.h>
int main (void)
{
  //declaring variables
  int age;

  //setting the  conditions
  //if statement
  if (age >=13 && age <=19)
    printf("teenager = true");
  
  //else statement
  else if (age <13)
    printf ("teenager = false");

  return 0;
}
