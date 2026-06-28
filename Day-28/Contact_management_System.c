#include <stdio.h>
struct contact
{
    char name[20] ;
    long long mobile ;
    char city[20] ;
};
int main ()
{
    struct contact c ;
    printf("Enter Name : ") ;
    scanf("%s",c.name) ;
    printf("Enter Mobile Number : ") ;
    scanf("%lld",&c.mobile) ;
    printf("Enter City : ") ;
    scanf("%s",c.city) ;
    printf("\nName : %s\n",c.name) ;
    printf("Mobile Number : %lld\n",c.mobile) ;
    printf("City : %s\n",c.city) ;
    return 0 ;
}