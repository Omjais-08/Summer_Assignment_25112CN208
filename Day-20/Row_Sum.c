#include <stdio.h>
int main ()
{
    int a[3][3],i,j,sum ;
    for(i = 0 ; i < 3 ; i++)
    {
        for(j = 0 ; j < 3; j++)
        {
            printf("\nEnterValue for 2D Array : ") ;
            scanf("%d",&a[i][j]) ;
        }
    }
    printf("\n2D Array elements are : ") ;
    for(i = 0 ; i < 3 ; i++)
    {
        printf("\n") ;
        for(j = 0 ; j < 3 ; j++)
        {
            printf("%d\t",a[i][j]) ;
        }
    }
    for(i = 0 ; i < 3 ; i++)
    {
        sum = 0 ;
        for(j = 0 ; j < 3 ; j++)
        {
            sum = sum + a[i][j] ;
        }
        printf("\nSum of row %d is %d",i+1,sum) ;
    }
    return 0 ;
}