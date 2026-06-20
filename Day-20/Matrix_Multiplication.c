#include <stdio.h>
int main ()
{
    int a[3][3],b[3][3],c[3][3],i,j,k ;
    printf("Enter values for First matrix  ") ;
    for(i = 0 ; i < 3 ; i++)
    {
        for(j = 0 ; j < 3 ; j++)
        {
            printf("\nEnter Value for 2D Array : ") ;
            scanf("%d",&a[i][j]) ;
        }
    }
    printf("Enter values for Second matrix  ") ;
    for(i = 0 ; i < 3 ; i++)
    {
        for(j = 0 ; j < 3 ; j++)
        {
            printf("\nEnter Value for 2D Array : ") ;
            scanf("%d",&b[i][j]) ;
        }
    }
    printf("\nFirst matrix is : ") ;
    for(i = 0 ; i < 3 ; i++)
    {
        printf("\n") ;
        for(j = 0 ; j < 3 ; j++)
        {
            printf("%d\t",a[i][j]) ;
        }
    }
    printf("\nSecond matrix is : ") ;
    for(i = 0 ; i < 3 ; i++)
    {
        printf("\n") ;
        for(j = 0 ; j < 3 ; j++)
        {
            printf("%d\t",b[i][j]) ;
        }
    }
    for(i = 0 ; i < 3 ; i++)
    {
        for(j = 0 ; j < 3 ; j++)
        {
            c[i][j] = 0 ;
            for(k = 0 ; k < 3 ; k++)
            {
                c[i][j] = c[i][j] + a[i][k] * b[k][j] ;
            }
        }
    }
    printf("\nMultiplication of Matrices is : ") ;
    for(i = 0 ; i < 3 ; i++)
    {
        printf("\n") ;
        for(j = 0 ; j < 3 ; j++)
        {
            printf("%d\t",c[i][j]) ;
        }
    }
    return 0 ;
}