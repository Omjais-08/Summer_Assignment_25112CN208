#include <stdio.h>
int main()
{
    int a[10],b[10],i,j,n1,n2 ;
    printf("Enter number of elements in array 1 : ") ;
    scanf("%d",&n1) ;
    printf("Enter number of elements in array 2 : ") ;
    scanf("%d",&n2) ;
    printf("Enter elements of array 1 : \n") ;
    for(i = 0; i < n1; i++)
    {
        scanf("%d",&a[i]) ;
    }
    printf("Enter elements of array 2 : \n") ;
    for(j = 0; j < n2; j++)
    {
        scanf("%d",&b[j]) ;
    }
    printf("Common elements are : \n") ;
    for(i = 0; i < n1; i++)
    {
        for(j = 0; j < n2; j++)
        {
            if(a[i] == b[j])
            {
                printf("%d ",a[i]) ;
                break  ;
            }
        }
    }
    return 0;
}