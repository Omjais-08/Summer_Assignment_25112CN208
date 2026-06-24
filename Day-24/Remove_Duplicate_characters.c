#include <stdio.h>
int main ()
{
    char a[50] ;
    int i,j,found ;
    printf("Enter string : ") ;
    scanf("%s",a) ;
    for(i = 0 ; a[i] != '\0' ; i++)
    {
        found = 0 ;
        for(j = 0 ; j < i ; j++)
        {
            if(a[i] == a[j])
            {
                found = 1 ;
                break ;
            }
        }
        if(found == 0)
            printf("%c",a[i]) ;
    }
    return 0 ;
}