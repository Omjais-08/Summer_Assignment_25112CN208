#include <stdio.h>
int main ()
{
    int n,i,t ;
    printf("Enter number : ") ;
    scanf("%d",&n) ;
    for(i=1; i<=10; i++)
    {
        t = n * i ;
        printf("%d",t) ;

    }
    return 0 ;

}