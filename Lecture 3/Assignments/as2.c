
//program that prints the two-digit number in words

#include <stdio.h>


int main()
{
  //declaring variables 
  int num1;
  int num2;

  //ask the user for the input
  printf("Enter a two-digit number: ");
  scanf("%1d%1d", &num1 , &num2), 

  //display the results
  printf("Number entered in words: ");


  /*switch statement which prints the
   words for the first digit */
  switch (num1)
  {
    case 1:
    
    switch (num2)
    {
      /* as stated, 11-19 requires
      special treatment thats why it was
      enclosed in a nested switch statement */
      case 0:
        printf("ten");
        return 0;
      case 1:
        printf("eleven");
        return 0;
      case 2:
        printf("twelve");
        return 0;
      case 3:
        printf("thirteen");
        return 0;
      case 4:
        printf("fourteen");
        return 0;
      case 5:
        printf("fifteen");
        return 0;
      case 6:
        printf("sixteen");
        return 0;
      case 7:
        printf("seveenteen");
        return 0;
      case 8:
        printf("eighteen");
        return 0;
      case 9:
        printf("nineteen");
        return 0;
    }
    case 2:
      printf("twenty");
      break;
    case 3:
      printf("thirty");
      break;
    case 4:
      printf("forty");
      break;
    case 5:
      printf("fifty");
      break;
    case 6:
      printf("sixty");
      break;
    case 7: 
      printf("seventy");
      break;
    case 8:
      printf("eighty");
      break;
    case 9:
      printf("ninety");
      break;

  }

  /*switch statement which prints the
   words for the second digit */
  switch (num2)
  {
    case 1:
      printf("-one");
      break;
    case 2:
      printf("-two");
      break;
    case 3:
      printf("-three");
      break;
    case 4:
      printf("-four");
      break;
    case 5:
      printf("-five");
      break;
    case 6:
      printf("-six");
      break;
    case 7:
      printf("-seven");
      break;
    case 8:
      printf("-eight");
      break;
    case 9:
      printf("-nine");
      break;
  }
  return 0;

}