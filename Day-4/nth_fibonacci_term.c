#include <stdio.h>
int main()
{
    int n, x = 0, y = 1, z = 0, i;
    printf("Enter n: ");
    scanf("%d",&n);
    if(n == 1)
        printf("Nth Fibonacci term = %d",x);
    else if(n == 2)
        printf("Nth Fibonacci term = %d",y);
    else
    {
        for(i = 3; i <= n; i++)
        {
            z = x + y ;
            x = y;
            y = z;
        }
        printf("Nth Fibonacci term = %d", z);
    }
    return 0;
}