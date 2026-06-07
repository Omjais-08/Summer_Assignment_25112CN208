#include <stdio.h>
int sod(int) ;
int main ()
{
    int n,sum ;
    printf("Enter a number : ") ;
    scanf("%d",&n) ;
    sum = sod(n) ;
    printf("Sum of digits = %d",sum) ;
    return 0 ;
}
int sod(int n)
{
    if(n == 0)
    return 0 ;
    else
    return n % 10 + sod(n / 10) ;
}