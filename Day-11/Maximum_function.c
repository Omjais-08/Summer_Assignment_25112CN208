#include <stdio.h>
int max(int, int);
int main()
{
    int a, b;
    printf("Enter 2 integer numbers : ");
    scanf("%d%d", &a, &b);
    printf("Maximum of %d and %d = %d", a, b, max(a,b));
    return 0;
}
int max(int a, int b)
{
    if(a > b)
        return a;
    else
        return b;
}