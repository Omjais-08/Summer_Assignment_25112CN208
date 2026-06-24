#include <stdio.h>
#include <string.h>
int main () 
{
    char a[50],b[50],temp[100] ;
    printf("Enter first string : ") ;
    scanf("%s",a) ;
    printf("Enter second string : ") ;
    scanf("%s",b);
    if(strlen(a) != strlen(b)) 
    {
        printf("Not Rotation") ;
    }
    else 
    {
        strcpy(temp,a) ;
        strcat(temp,a) ;
        if(strstr(temp,b))
            printf("Rotation") ;
        else
            printf("Not Rotation") ;
    }
    return 0 ;
}