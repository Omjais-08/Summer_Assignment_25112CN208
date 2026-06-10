#include <stdio.h>
int main ()
{
    int i,j,n = 5,b ;
    i = 5 ;
    while(i>=1)
    {
        printf("\n") ;
        b = 1 ;
        while(b<=n-i)
        {
            printf(" ") ;
            b++ ;
        }
        j = 1 ;
        while(j<=i*2-1)
        {
            printf("*") ;
            j++ ;
        }
        i = i - 1 ;
    }
    return 0 ;
}