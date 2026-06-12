#include <stdio.h>
void fibonacci(int n)
{
    int x = 0, y = 1, z = 0, i ;
    for (i = 1; i <= n; i++)
    {
        printf("%d ",z) ;
        x = y ;
        y = z ;
        z = x + y ;
    }
}
int main()
{
    int n ;
    printf("Enter number of terms : ") ;
    scanf("%d",&n) ;
    fibonacci(n) ;
    return 0 ;
}