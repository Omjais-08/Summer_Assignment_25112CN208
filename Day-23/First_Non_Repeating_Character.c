#include <stdio.h>
int main() 
{
    char a[50] ;
    int freq[256] = {0} ;
    int i ;
    printf("Enter a string : ") ;
    gets(a) ;
    for(i = 0 ; a[i] != '\0'; i++)
    {
        freq[a[i]]++ ;
    }
    for(i = 0 ; a[i] != '\0'; i++) 
    {
        if(freq[a[i]] == 1) 
        {
            printf("First non-repeating character = %c",a[i]);
            return 0 ;
        }
    }
    printf("No non-repeating character found");
    return 0;
}