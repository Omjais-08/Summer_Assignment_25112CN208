#include <stdio.h>
int main ()
{
    int i,j,k,n = 5,b ;
    i = 1 ;
    while(i<=n)
    {
        printf("\n") ;
        b = 1 ;
        while(b<=n-i)
        {
            printf(" ") ;
            b++ ;
        }
        j = 1 ;
        while(j<=i)
        {
            printf("%c",j + 64) ;
            j++ ;
        }
        k = i - 1 ;
        while(k>=1)
        {
            printf("%c",k + 64) ;
            k-- ;
        }
        i = i + 1 ;
    }
    return 0 ;
}