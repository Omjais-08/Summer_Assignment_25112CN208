#include <stdio.h>
int palindrome(int i)
{
    int x, rev = 0 ;
    x = i;
    while(i > 0)
    {
        rev = (rev * 10) + i % 10 ;
        i = i / 10 ;
    }
    if(rev == x)
        return 1 ;
    else
        return 0 ;
}
int main()
{
    int i;
    printf("Enter no. to check: ") ;
    scanf("%d", &i) ;
    if(palindrome(i))
        printf("Palindrome") ;
    else
        printf("Not Palindrome") ;
    return 0;
}