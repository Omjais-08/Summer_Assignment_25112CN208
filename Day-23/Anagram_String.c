#include <stdio.h>
#include <string.h>
int main () 
{
    char a[50],b[50] ;
    int freq[256] = {0} ;
    int i,flag = 1 ;
    printf("Enter first string : ") ;
    scanf("%s",a) ;
    printf("Enter second string : ") ;
    scanf("%s",b) ;
    if(strlen(a) != strlen(b))
        flag = 0 ;
    else {
        for(i = 0; a[i] != '\0'; i++) 
        {
            freq[a[i]]++ ;
            freq[b[i]]-- ;
        }
        for(i = 0 ; i < 256 ; i++) 
        {
            if(freq[i] != 0) 
            {
                flag = 0 ;
                break ;
            }
        }
    }
    if(flag == 1)
        printf("Strings are anagrams") ;
    else
        printf("Strings are not anagrams") ;
    return 0 ;
}