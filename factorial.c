#include <stdio.h>
int main ()
{
    int i,factorial = 1 ;
    printf("Enter number to find factorial : ") ;
    scanf("%d",&i) ;
    while(i>0)
    {
    factorial = factorial * i ;
    i-- ;
    }
    printf("Factorial of a given number = %d",factorial) ;
    return 0 ;
}