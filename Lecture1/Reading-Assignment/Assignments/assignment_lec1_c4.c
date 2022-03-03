#include <stdio.h>

/*
// must not start with capital letter (void)
int main(Void)
{

    // must not be in all caps (int)
    INT sum;

    // comment was not closed so it
    covers the lines of code below
    and read as comment
    /* COMPUTE RESULT


    // must declare the variables
    and assign the values

    sum= 25+37-19

    // comment was not closed
    /* DISPLAYS RESULTS

    //lacking (,) comma
    printf("The answer is %i\n" sum);
    return 0;
} */

int main(void)
{

    //declaring variables
    int x,y,z,sum;

    //assigning values
    x= 25;
    y= 37;
    z= -19;
    sum= 25+37-19;

    //printing the values
    printf("The answer is :%d\n", sum);
    return 0;
}
