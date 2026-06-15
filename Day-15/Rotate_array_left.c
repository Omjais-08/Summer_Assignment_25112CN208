#include <stdio.h>
int main()
{
    int a[10],n,i,first ;
    printf("Enter number of elements in array : ") ;
    scanf("%d",&n) ;
    printf("Enter elements of array :\n") ;
    for(i = 0; i < n; i++)
    {
        scanf("%d",&a[i]) ;
    }
    first = a[0] ;
    for(i = 0; i < n-1; i++)
    {
        a[i] = a[i+1] ;
    }
    a[n-1] = first ;
    printf("Array after left rotation:\n") ;
    for(i = 0; i < n; i++)
    {
        printf("%d ",a[i]) ;
    }
    return 0 ;
}