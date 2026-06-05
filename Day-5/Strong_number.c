#include <stdio.h>
int main ()
{
    int n,x,rem,fact=1,i,result=0 ;
    printf("Enter a number : ") ;
    scanf("%d",&n) ;
    x = n ;
    while(x != 0)
    {
        rem = x % 10 ;
        for(i=1; i<=rem; i++)
        {
            fact = fact * i ;
        }
        result = result + fact ;
        fact = 1 ;
        x = x / 10 ;
    } 
    if(result == n)
    printf("Strong number") ;
    else
    printf("Not a strong number") ;
    return 0 ;
}