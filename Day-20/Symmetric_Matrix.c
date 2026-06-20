#include <stdio.h>
int main ()
{
    int a[3][3],i,j,flag = 1 ;
    printf("Enter values for matrix ") ;
    for(i = 0 ; i < 3 ; i++)
    {
        for(j = 0 ; j < 3 ; j++)
        {
            printf("\nEnter value for 2D Array : ");
            scanf("%d",&a[i][j]) ;
        }
    }
    printf("\nMatrix is : ") ;
    for(i = 0 ; i < 3 ; i++)
    {
        printf("\n") ;
        for(j = 0 ; j < 3 ; j++)
        {
            printf("%d\t",a[i][j]);
        }
    }
    for(i = 0 ; i < 3 ; i++)
    {
        for(j = 0 ; j < 3 ; j++)
        {
            if(a[i][j] != a[j][i])
            {
                flag = 0 ;
                break ;
            }
        }
    }
    if(flag == 1)
        printf("\n\nMatrix is Symmetric") ;
    else
        printf("\n\nMatrix is Not Symmetric") ;
    return 0 ;
}