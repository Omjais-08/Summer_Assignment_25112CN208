#include <stdio.h>
int checkArmstrong(int i) 
{
    int sum = 0, x ;
    x = i ;
    while (i > 0) 
    {
        sum = sum + (i % 10) * (i % 10) * (i % 10) ;
        i = i / 10 ;
    }
    if (sum == x) 
    {
        return 1 ;
    } 
    else 
    {
        return 0 ;
    }
}
int main() 
{
    int n;
    printf("Enter No. to check : ") ;
    scanf("%d",&n);
    if (checkArmstrong(n) == 1) 
    {
        printf("Armstrong No.") ;
    } 
    else 
    {
        printf("Not Armstrong") ;
    }
    return 0 ;
}