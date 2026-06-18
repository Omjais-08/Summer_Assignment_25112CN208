#include <stdio.h>
int main ()
{
    int n,a[10],i,key,low,high,mid,pos = -1 ;
    printf("Enter number of elements in array : ") ;
    scanf("%d",&n) ;
    printf("Enter elements of array : ") ;
    for(i = 0 ; i < n ; i++)
    {
        scanf("%d",&a[i]) ;
    }
    printf("Enter the element to be searched : ") ;
    scanf("%d",&key) ;
    low = 0 ;
    high = n - 1 ;
    while(low <= high)
    {
        mid = (low + high)/2 ;
        if(a[mid] == key)
        {
            printf("Element found at %d",mid) ;
            pos = mid ;
            break ;
        }
        else if (a[mid] < key )
        {
            low = mid + 1 ;
        }
        else
        high = mid - 1 ;
    }
    if (pos == -1)
    printf("Element not found") ;
    return 0 ;
}