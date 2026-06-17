#include <stdio.h>
int main ()
{
    int a[10],b[10],c[20],i,j,k=0,n1,n2,found ;
    printf("Enter number of elements in array 1 : ") ;
    scanf("%d",&n1) ;
    printf("Enter number of elements in array 2 : ") ;
    scanf("%d",&n2) ;
    printf("Enter elements of array 1 : \n") ;
    for(i=0 ; i<n1 ; i++)
    {
        scanf("%d",&a[i]) ;
        c[k] = a[i] ;
        k++ ;
    }
    printf("Enter elements of array 2 : \n") ;
    for(i=0 ; i<n2 ; i++)
    {
        scanf("%d",&b[i]) ;
    }
    for(i=0 ; i< n2 ; i++)
    {
        found = 0 ;
        for(j=0 ; j< n1 ; j++)
        {
            if(b[i] == a[j])
            {
                found = 1 ;
                break ;
            }
        }
        if(found == 0)
        {
            c[k] = b[i] ;
            k++ ;
        }
    }
    printf("Union of arrays : \n") ;
    for(i=0 ; i< k ; i++)
    {
        printf(" %d ",c[i]) ;
    }
    return 0 ;
}