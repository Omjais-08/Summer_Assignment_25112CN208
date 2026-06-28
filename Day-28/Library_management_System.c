#include <stdio.h>
struct library
{
    int bookid ;
    char bookname[20] ;
    char author[20] ;
} ;
int main ()
{
    struct library b ;
    printf("Enter Book ID : ") ;
    scanf("%d",&b.bookid) ;
    printf("Enter Book Name : ") ;
    scanf("%s",b.bookname) ;
    printf("Enter Author Name : ") ;
    scanf("%s",b.author) ;
    printf("\nBook ID : %d\n",b.bookid) ;
    printf("Book Name : %s\n",b.bookname) ;
    printf("Author Name : %s\n",b.author) ;
    return 0 ;
}