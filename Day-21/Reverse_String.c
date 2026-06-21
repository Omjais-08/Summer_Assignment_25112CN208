#include <stdio.h>
int main ()
{
    char a[50] ;
    int i ;
    printf("\nEnter a string : ") ;
    gets(a) ;
    i = 0 ;
    while (a[i] != '\0')
    i++ ;
    printf("\nReverse String  = ") ;
    for(i = i - 1 ; i >= 0 ; i--)
    {
        printf("%c",a[i]) ;
    }
    return 0 ;
}