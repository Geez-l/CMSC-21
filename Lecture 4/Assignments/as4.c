#include <stdio.h>

int main(void)
{
    int n;
    int i=1;
    int power = 2;

    printf("\n\n<< This program calculates the power of a number>>\n");
    printf("\n");
    printf("\nPlease enter a number: ");
    scanf("%d", &n);

    for (i=2; i<=n; i++){
        power = power*2;
    }
    printf("\nPower of two of the input is : %d",power);
}