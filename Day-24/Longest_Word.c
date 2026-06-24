#include <stdio.h>
#include <string.h>

int main()
{
    char a[200],word[50];
    int i,len = 0,max = 0,pos = 0 ;
    printf("Enter sentence : ") ;
    gets(a) ;
    for(i = 0 ; ; i++)
    {
        if(a[i] != ' ' && a[i] != '\0')
        {
            word[len] = a[i] ;
            len++ ;
        }
        else
        {
            word[len] = '\0' ;
            if(len > max)
            {
                max = len ;
                strcpy(&a[150],word) ;
            }
            len = 0 ;
        }
        if(a[i] == '\0')
            break ;
    }
    printf("Longest word = %s",&a[150]) ;
    return 0 ;
}