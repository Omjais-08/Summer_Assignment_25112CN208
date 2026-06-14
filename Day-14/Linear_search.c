#include <stdio.h>
int main ()
{
    int a[10], i, flag = 0, key, pos ;
    for(i = 0; i < 10; i++)
    {
        printf("\nEnter Number :") ;
        scanf("%d", &a[i]) ;
    }
    printf("\nEnter Number to search :") ;
    scanf("%d",&key) ;
    for(i = 0; i < 10; i++)
    {
        if(a[i] == key)
        {
            pos = i + 1 ;
            flag = 1 ;
            break ;
        }
    }
    if(flag == 1)
        printf("\nNumber Found at %d position",pos) ;
    else
        printf("\nNumber Not Found") ;
    return 0 ;
}