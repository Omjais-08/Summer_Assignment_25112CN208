#include <stdio.h>
int main()
{
    int a[10],i,freq = 0,key ;
    for(i = 0; i < 10; i++)
    {
        printf("\nEnter Number : ") ;
        scanf("%d",&a[i]) ;
    }
    printf("\nEnter Number to find frequency : " );
    scanf("%d",&key) ;
    for(i = 0; i < 10; i++)
    {
        if(a[i] == key)
            freq++ ;
    }
    printf("\nFrequency of %d is %d",key,freq) ;
    return 0 ;
}