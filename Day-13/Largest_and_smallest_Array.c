#include <stdio.h>
int main ()
{
    int a[10],i,n,largest,smallest ;
    printf("Enter number of elements in array : ") ;
    scanf("%d",&n) ;
    printf("Enter elements of an array :\n") ;
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]) ;
    }
    largest = a[0] ;
    smallest = a[0] ;
    for(i = 1; i < n; i++)
    {
        if(a[i] > largest)
            largest = a[i] ;
        if(a[i] < smallest)
            smallest = a[i ] ;
    }
    printf("Largest element of array = %d\n",largest) ;
    printf("Smallest element of array = %d",smallest) ;
    return 0 ;
}