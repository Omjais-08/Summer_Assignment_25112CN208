#include <stdio.h>
int main ()
{
    int a[10],b[10],c[20],i,j,k=0,n1,n2 ;
    printf("Enter number of elements in array 1 : ") ;
    scanf("%d",&n1) ;
    printf("Enter number of elements in array 2 : ") ;
    scanf("%d",&n2) ;
    printf("Enter elements of array 1 : \n") ;
    for(i=0 ; i<n1 ; i++)
    {
        scanf("%d",&a[i]) ;
    }
    printf("Enter elements of array 2 : \n") ;
    for(i=0 ; i<n2 ; i++)
    {
        scanf("%d",&b[i]) ;
    }
    for(i=0 ; i< n1 ; i++)
    {
        for(j=0 ; j< n2 ; j++)
        {
            if(a[i] == b[j])
            {
                c[k] = a [i] ;
                k++ ;
            }
        }
    }
    printf("Intersection of arrays : \n") ;
    for(i=0 ; i< k ; i++)
    {
        printf(" %d ",c[i]) ;
    }
    return 0 ;
}