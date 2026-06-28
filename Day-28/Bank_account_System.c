#include <stdio.h>
struct bank
{
    int accno ;
    char name[20] ;
    float balance ;
} ;
int main ()
{
    struct bank b ;
    printf("Enter Account Number : ") ;
    scanf("%d",&b.accno) ;
    printf("Enter Account Holder Name : ") ;
    scanf("%s",b.name) ;
    printf("Enter Balance : ") ;
    scanf("%f",&b.balance) ;
    printf("\nAccount Number : %d\n",b.accno) ;
    printf("Account Holder Name : %s\n",b.name) ;
    printf("Balance : %.2f\n",b.balance) ;
    return 0 ;
}