#include <stdio.h>
int main ()
{
    int a[10],b[10],c[20],i,j,n1,n2 ;
    printf("Enter number of elements in array 1 : ") ;
    scanf("%d",&n1) ;
    printf("Enter number of elements in array 2 : ") ;
    scanf("%d",&n2) ;
    printf("Enter elements of array 1 : \n") ;
    for(i=0 ; i<n1 ; i++)
    {
        scanf("%d",&a[i]) ;
        c[i] = a[i] ;
    }
    printf("Enter number of elements in array 2 : \n") ;
    for(j=0 ; j<n2 ; j++)
    {
        scanf("%d",&b[j]) ;
        c[i] = b[j] ;
        i++ ;
    }
    printf("Merged array : \n") ;
    for(j=0 ; j< n1 + n2 ; j++)
    {
        printf(" %d ",c[j]) ;
    }
    return 0 ;
}