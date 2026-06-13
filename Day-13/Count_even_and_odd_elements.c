#include <stdio.h>
int main ()
{
    int a[10],i,n,even = 0,odd = 0 ;
    printf("Enter numbers of elements in an array : ") ;
    scanf("%d",&n) ;
    printf("Enter elements of array :\n") ;
    for(i = 0 ; i < n ; i++)
    {
        scanf("%d",&a[i]) ;
    }
    for(i = 0 ; i < n ; i++)
    {
        if (a[i] % 2 == 0)
        even++ ;
        else
        odd++ ;
    }
    printf("\nTotal Even = %d and Total Odd = %d",even,odd) ;
    return 0 ;
}