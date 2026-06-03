#include <stdio.h>
int main()
{
    int i,j,start,end,count ;
    printf("Enter the starting value : ") ;
    scanf("%d",&start) ;
    printf("Enter the end value : ") ;
    scanf("%d",&end) ;
    for(i=start; i<=end; i++)
    {
        count = 0 ;
        for(j=1; j<=i; j++)
        {
            if(i%j==0)
            {
                count++ ;
            }
        }
        if(count==2)
        {
            printf("Prime number : %d \n",i) ;
        }
    }
    return 0 ;
}