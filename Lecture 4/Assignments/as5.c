

#include <stdio.h>


int main(void)
{
  //declaring variables
  
  int i, j, days_month, startday_week;
  
  printf("\n\n<< This program displays one month calendar >>\n");

  //ask user input for the number of days
  printf("\nEnter number of days in month: ");
  scanf("%d", &days_month);  

  /*set a condition to display an error message 
    if it is less than 28 or greater than 31 */
  if (days_month < 28  || days_month > 31 ){
    printf("Please recheck input");
  }
  else{
      
    // ask user input for the start of the day in the week
    printf("Enter starting day of the week (1=Sun, 7=Sat): ");
    scanf("%d", &startday_week);

    /*set a condition to display an error message
    if user input is less than 1 or greater than 7 */
    if(startday_week < 1 || startday_week > 7){
        printf("Please recheck input\n");
    }
    else{
        
        // improves the readability of the program
        printf("\t\t2022 Calendar\n");
        printf(" Su  Mo  Tu  We  Th  Fr  Sa\n");
        printf(" --  --  --  --  --  --  --\n\n");

        //printing the blank days of the first week
        for (i=1; i < startday_week; i++)
            printf("    ");
        
        //printing the calendar numbers
        for (j=1; j <= days_month; i++, j++){
            printf("%3d ", j);
            
            /*if statement tests whether i is the last day in the week
            then, it prints a new-line character.*/ 
            if (i % 7 == 0)
                printf("\n");
        }


    }


  }
  
  
  return 0;
}
