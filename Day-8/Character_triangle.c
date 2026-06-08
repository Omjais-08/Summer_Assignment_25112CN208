#include <stdio.h>
int main ()
{
    int i,j ;
    i = 1 ;
    while (i <= 5)
    {
        printf("\n") ;
        j = 1 ;
        while (j <= i)
        {
            printf("%c",j + 64) ;
            j++ ;
        }
        i++ ;
    }
    return 0 ;
}