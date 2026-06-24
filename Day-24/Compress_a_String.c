#include <stdio.h>
int main () 
{
    char a[50];
    int i,count ;
    printf("Enter a string : ") ;
    scanf("%s",a) ;
    for(i = 0 ; a[i] != '\0' ; i++) 
    {
        count = 1 ;
        while(a[i] == a[i + 1]) 
        {
            count++ ;
            i++ ;
        }
        printf("%c%d",a[i],count) ;
    }
    return 0;
}