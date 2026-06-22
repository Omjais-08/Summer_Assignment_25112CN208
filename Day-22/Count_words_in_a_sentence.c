#include <stdio.h>
int main ()
{
    char a[50] ;
    int i, word ;
    i = 0 ;
    word = 1 ;
    printf("\nEnter a String : ") ;
    gets(a) ;
    while(a[i] != '\0')
    {
        if(a[i] == ' ')
        word++ ;
        i++ ;
    }
    printf("\nNumber of words = %d",word) ;
    return 0 ;
}