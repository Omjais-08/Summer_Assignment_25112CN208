#include <stdio.h>
int main () 
{
    char a[50] ;
    int freq[256] = {0} ;
    int i ;
    printf("Enter a string : ") ;
    gets(a) ;
    for(i = 0 ; a[i] != '\0' ; i++) 
    {
        freq[a[i]]++ ;
        if(freq[a[i]] == 2) 
        {
            printf("First repeating character =%c",a[i]);
            return 0 ;
        }
    }
    printf("No repeating character found") ;
    return 0 ;
}