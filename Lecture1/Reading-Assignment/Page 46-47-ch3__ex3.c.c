/* adding of two fractions*/
#include <stdio.h>

int main(void)
{
    //declaring all of the variables 
    int num1, denom1,num2, denom2, result_num,result_denom;

    //printing the value of the first fraction
    printf("Enter the first fraction:\n");
    
    //taking the input from the user
    scanf("%d/%d", &num1, &denom1);
    
    //printing the value of the second fraction
    printf("Enter the second fraction:\n");
    
    //taking the input from the user
    scanf("%d/%d", &num2, &denom2);

    /*result of the numerator was calculated 
    as it follows the basic formula in adding
    the fraction with dissimilar denominators*/
    
    /*this is a process of cross multiplication
    wherein the numerator of the first number
    is multiplied by the denominator of the second
    number. Then the numerator of the second number
    was multiplied to the denominator of the first number.
    The two results were then added*/
    result_num= num1*denom2 + num2*denom1;

    /* the first number in the denominator is multiplied 
    to the second. by this, we are getting the LCD or the
    the least common denominator of the two*/
    result_denom= denom1*denom2;
    
    /*printing of the results [added fractions that was
    not reduced in lowest term*/
    printf("The sum is %d/%d\n", result_num,result_denom);

    return 0;

}
