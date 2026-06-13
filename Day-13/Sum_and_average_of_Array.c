#include <stdio.h>
int main()
{
    int a[10], i, n, sum = 0 ;
    float avg ;
    printf("Enter number of elements in array : ") ;
    scanf("%d",&n) ;
    printf("Enter elements of array :\n") ;
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]) ;
        sum = sum + a[i] ;
    }
    avg = (float)sum / n ;
    printf("Sum = %d\n",sum) ;
    printf("Average = %.2f",avg) ;
    return 0;
}