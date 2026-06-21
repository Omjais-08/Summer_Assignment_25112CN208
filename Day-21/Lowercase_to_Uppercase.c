#include <stdio.h>
int main ()
{
    char a[50] ;
    int i ;
    printf("\nEnter a string in lowercase : ") ;
    gets(a) ;
    i = 0 ;
    while (a[i] != '\0')
    {
        if(a[i] >= 'a' && a[i] <= 'z')
        a[i] = a[i] - 32 ;
        i++ ;
    }
    printf("\nString in Uppercase = %s",a) ;
    return 0 ;
}