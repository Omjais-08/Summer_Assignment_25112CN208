#include <stdio.h>
int main ()
{

    int a[10],i,n ;
    printf("Enter number of elements in array :") ;
    scanf("%d",&n) ;
    for(i = 0 ; i < n ; i++)
    {
        printf("\nEnter elements of array :") ;
        scanf("%d",&a[i]) ;
    }
    printf("Reversed array : \n") ;
    for(i = n - 1 ; i >= 0 ; i--)
    printf(" %d ",a[i]) ;
    return 0 ;
}