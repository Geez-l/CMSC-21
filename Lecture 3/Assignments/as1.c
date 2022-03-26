#include <stdio.h>
#include <stdbool.h>

int main ()
{

  int age;                  //declared the variables
  bool teenager = false;   // set value to false
  printf("\nage: ");
  scanf("%d", &age);
  if (age >=13 && age <=19) // set the condition (assignemt = !0);
  {
   teenager = true;
  }
  printf("Teenager: %s", teenager ? "TRUE" : "FALSE"); //printing of results
  return 0; 
#include <stdio.h>
#include <stdbool.h>   /* system header file which 
                     allows to use Boolean (True/ False)*/ 

int main ()
{

  int age;                  //declared the variables
  bool teenager = false;   // set value to false
  printf("\nage: ");
  scanf("%d", &age);
  if (age >=13 && age <=19) // set the condition (assignemt = !0);
  {
   teenager = true;
  }
  printf("Teenager: %s", teenager ? "TRUE" : "FALSE"); //printing of results
  return 0; 
}