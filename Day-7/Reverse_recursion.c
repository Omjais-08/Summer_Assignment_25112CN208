#include <stdio.h>
int rev(int) ;
int main ()
{
    int n,r ;
    printf("Enter a number to find Reverse : ") ;
    scanf("%d",&n) ;
    r = rev(n) ;
    printf("Reverse = %d",r) ;
    return 0 ;
}
int rev(int n)
{
    static int sum,r ;
    if(n)
    {
        r = n % 10 ;
        sum = sum * 10 + r ;
        rev(n/10) ;
    }
    else
    return 0 ;
    return sum ;
}