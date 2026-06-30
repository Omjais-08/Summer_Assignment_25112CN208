#include <stdio.h>
int main ()
{
    int id[100] ;
    char book[100][30] ;
    char author[100][30] ;
    int n = 0,choice,i ;
    do
    {
        printf("\n----- MINI LIBRARY SYSTEM -----\n") ;
        printf("1. Add Book\n") ;
        printf("2. Display Books\n") ;
        printf("3. Exit\n") ;
        printf("Enter your choice : ") ;
        scanf("%d",&choice) ;
        switch(choice)
        {
            case 1:
                printf("Enter Book ID : ") ;
                scanf("%d",&id[n]) ;
                printf("Enter Book Name : ") ;
                scanf("%s",book[n]) ; 
                printf("Enter Author Name : ") ;
                scanf("%s",author[n]) ;
                n++ ;
                printf("Book Added Successfully!\n") ;
                break ;
            case 2:
                if(n == 0)
                {
                    printf("No Books Available!\n") ;
                }
                else
                {
                    printf("\nBook ID\tBook Name\tAuthor\n") ;
                    printf("-----------------------------------------\n") ;
                    for(i = 0 ; i < n ; i++)
                    {
                        printf("%d\t%s\t\t%s\n",id[i], book[i], author[i]) ;
                    }
                }
                break ;
            case 3:
                printf("Exiting...\n") ;
                break ;
            default:
                printf("Invalid Choice!\n") ;
        }
    } while(choice != 3);
    return 0 ;
}