#include <stdio.h>
int main ()
{
    int a[3][3],b[3][3],i,j ;
    printf("Enter values for matrix  ") ;
    for(i = 0 ; i < 3 ; i++)
    {
        for(j = 0 ; j < 3 ; j++)
        {
            printf("\nEnter Value for 2D Array : ") ;
            scanf("%d",&a[i][j]) ;
        }
    }
    printf("\nThe Original Matrix is : ") ;
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
        for(j = 0 ; j < 3 ; j++)
        {
            b[j][i] = a[i][j] ;
        }
    }
    printf("\nTranspose of the matrix : ") ;
    for(i = 0 ; i < 3 ; i++)
    {
        printf("\n") ;
        for(j = 0 ; j < 3 ; j++)
        {
            printf("%d\t",b[i][j]) ;
        }
    }
    return 0 ;
}