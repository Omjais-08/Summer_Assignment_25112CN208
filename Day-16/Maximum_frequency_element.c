#include <stdio.h>
int main()
{
    int n, a[10], i, j, count, max = 0, element ;
    printf("Enter number of elements: ");
    scanf("%d",&n) ;
    printf("Enter elements : ") ;
    for(i = 0; i < n; i++)
    {
        scanf("%d",&a[i]) ;
    }
    for(i = 0; i < n; i++)
    {
        count = 0 ;
        for(j = 0; j < n; j++)
        {
            if(a[i] == a[j])
            {
                count++ ;
            }
        }
        if(count > max)
        {
            max = count ;
            element = a[i] ;
        }
    }
    if(max == 1)
    {
        printf("All elements have same frequency") ;
    }
    else
    {
        printf("Maximum frequency element = %d",element) ;
    }
    return 0 ;
}