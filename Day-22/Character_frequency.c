#include <stdio.h>
int main ()
{
    char a[50],ch ;
    int i,count = 0 ;
    printf("Enter a String : ") ;
    gets(a) ;
    printf("Enter character : ") ;
    scanf("%c",&ch) ;
    i = 0 ;
    while(a[i] != '\0') 
    {
        if(a[i] == ch)
        count++ ;
        i++ ;
    }
    printf("Frequency of %c = %d",ch,count) ;
    return 0 ;
}