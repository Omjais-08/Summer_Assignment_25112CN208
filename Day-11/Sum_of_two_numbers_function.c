#include <stdio.h>
int add (int, int) ;
int main ()
{
    int a,b ;
    printf("Enter 2 integer numbers : ") ;
    scanf("%d%d",&a,&b) ;
    printf("Sum = %d + %d = %d\n",a,b,add(a,b)) ;
    return 0 ;

}
int add (int a , int b)
{
    return (a+b) ;
}