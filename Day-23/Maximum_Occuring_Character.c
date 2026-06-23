#include <stdio.h>
int main() 
{
    char a[50] ;
    int freq[256] = {0} ;
    int i,max = 0 ;
    char ch ;
    printf("Enter a string : ") ;
    gets(a) ;
    for(i = 0 ; a[i] != '\0' ; i++) 
    {
        freq[a[i]]++ ;
    }
    for(i = 0 ; i < 256 ; i++) 
    {
        if(freq[i] > max) 
        {
            max = freq[i] ;
            ch = i ;
        }
    }
    printf("Maximum occurring character = %c",ch) ;
    return 0 ;
}