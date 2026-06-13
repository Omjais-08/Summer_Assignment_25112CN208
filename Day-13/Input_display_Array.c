#include <stdio.h>
int main ()
{
    int a[10],i,n ;
    printf("Enter number of elements in array : ") ;
    scanf("%d",&n) ;
    printf("Enter elements of array : ") ;
    for(i = 0 ; i < n ; i++)
    {
        scanf("%d",&a[i]) ;
    }
    printf("Elements of array are : ") ;
    for(i = 0 ; i < n ; i++)
    printf("\n%d",a[i]) ;
    return 0 ;
}