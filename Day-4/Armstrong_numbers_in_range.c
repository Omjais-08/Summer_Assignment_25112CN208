#include <stdio.h>
int main()
{
    int start, end, num, i, x, sum;
    printf("Enter starting number: ");
    scanf("%d",&start);
    printf("Enter ending number: ");
    scanf("%d",&end);
    printf("Armstrong numbers are:\n");
    for(num = start; num <= end; num++)
    {
        i = num;
        x = i;
        sum = 0;
        while(i > 0)
        {
            sum = sum + (i % 10) * (i % 10) * (i % 10);
            i = i / 10;
        }
        if(sum == x)
        {
            printf("%d ",x);
        }
    }
    return 0;
}