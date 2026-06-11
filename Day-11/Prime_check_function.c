#include <stdio.h>
void prime(int);
int main()
{
    int i;
    printf("\nEnter no. to check : ");
    scanf("%d", &i);
    prime(i);
    return 0;
}
void prime(int i)
{
    int x, count = 0;
    for(x = 1; x <= i; x++)
    {
        if(i % x == 0)
            count++;
    }
    if(count == 2)
        printf("\nThe no. is Prime.");
    else
        printf("\nNot Prime");
}