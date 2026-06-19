#include <stdio.h>
int main ()
{
    int a[3][3],i,j,sum1 = 0,sum2 = 0 ;
    for(i = 0 ; i < 3 ; i++)
    for(j = 0 ; j < 3 ; j++)
    {
        printf("Enter Value for 2D Array : ") ;
        scanf("%d",&a[i][j]) ;
    }
    printf("\n2D Array Elements are : ") ;
    for(i = 0 ; i < 3 ; i++)
    {
        printf("\n") ;
        for(j = 0 ; j < 3 ; j++)
        printf("%d\t",a[i][j]) ;
    }
    for(i = 0 ; i < 3 ; i++)
    for(j = 0 ; j < 3 ; j++)
    {
        if(i == j)
            sum1 = sum1 + a[i][j] ;
        if(i + j == 2)
            sum2 = sum2 + a[i][j] ;
    }
    printf("\n\nSum of Left Diagonal = %d",sum1) ;
    printf("\nSum of Right Diagonal = %d",sum2) ;
    return 0 ;
}