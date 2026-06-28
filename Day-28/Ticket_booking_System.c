#include <stdio.h>
struct ticket
{
    int ticketno ;
    char name[20] ;
    char destination[20] ;
} ;
int main ()
{
    struct ticket t ;
    printf("Enter Ticket Number : ") ;
    scanf("%d",&t.ticketno) ;
    printf("Enter Passenger Name : ") ;
    scanf("%s",t.name) ;
    printf("Enter Destination : ") ;
    scanf("%s",t.destination) ;
    printf("\nTicket Number : %d\n",t.ticketno) ;
    printf("Passenger Name : %s\n",t.name) ;
    printf("Destination : %s\n",t.destination) ;
    return 0 ;
}