#include <stdio.h>
int main()
{
    int i, j;
    i = 1;
    while (i <= 5)
    {
        j = 1;
        while (j <= i)
        {
            printf("%c", i + 64);
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}