#include <stdio.h>
int main ()
{
    int n,a[10],i,j,flag=0 ;
    printf("Enter the number of elements in an array :") ;
    scanf("%d",&n) ;
    for(i = 0 ; i < n ; i++)
    {
        printf("Enter elements of array :") ;
        scanf("%d",&a[i]) ;
    }
    for(i = 0 ; i < n ; i++)
    {
        for(j = i + 1 ; j < n ; j++)
        {
            if(a[i] == a[j])
            {
                flag = 1 ;
                printf("\nDuplicate values are : %d",a[i]) ;
                break ;
            }
        }
    }
    if(flag == 0)
    {
        printf("\nArray has no duplicate values") ;
    }
    return 0 ;
}