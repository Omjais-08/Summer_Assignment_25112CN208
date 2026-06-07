#include <stdio.h>
int fibo(int n) ;
int main ()
{
    int n ;
    printf("Enter number of terms : ") ;
    scanf("%d",&n) ;
    printf("\n0\n1") ;
    fibo(n-2) ;
    return 0 ;
}
int fibo(int n)
{
    static int n1 = 0, n2 = 1, n3 ;
    if(n>0)
    {
        n3 = n1 + n2 ;
        n1 = n2 ;
        n2 = n3 ;
        printf("\n%d",n3) ;
        fibo(n-1) ;
    }
}