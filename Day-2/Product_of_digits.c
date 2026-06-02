#include <stdio.h>
int main ()
{
    int i,product = 1 ;
    printf("Enter number : ") ;
    scanf("%d",&i) ;
    while(i>0)
    {
        product = product * (i % 10 ) ;
        i = i / 10 ;
    }
    printf("Product of digits =%d",product) ;

    return 0 ;

}