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
    printf("\nTotal number of characters = %d",i) ;
    return 0 ;
}