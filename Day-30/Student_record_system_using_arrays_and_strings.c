#include <stdio.h>
int main ()
{
    int roll[100],marks[100] ;
    char name[100][30] ;
    int n = 0,choice,i ;
    do
    {
        printf("\n----- Student Record System -----\n") ;
        printf("1. Add Student\n") ;
        printf("2. Display Students\n") ;
        printf("3. Exit\n") ;
        printf("Enter your choice : ") ;
        scanf("%d",&choice) ;
        switch (choice)
        {
            case 1:
                printf("Enter Roll Number : ") ;
                scanf("%d",&roll[n]) ;
                printf("Enter Student Name : ") ;
                scanf("%s",name[n]) ;
                printf("Enter Marks : ") ;
                scanf("%d",&marks[n]) ;
                n++ ;
                printf("Student Record Added Successfully!\n") ;
                break ;
            case 2:
                if (n == 0)
                {
                    printf("No Student Records Available!\n") ;
                }
                else
                {
                    printf("\nRoll\tName\tMarks\n") ;
                    printf("---------------------------------\n") ;

                    for (i = 0 ; i < n ; i++)
                    {
                        printf("%d\t%s\t%d\n",roll[i], name[i], marks[i]) ;
                    }
                }
                break ;
            case 3:
                printf("Exiting...\n") ;
                break ;
            default:
                printf("Invalid Choice!\n") ;
        }
    } while (choice != 3) ;
    return 0 ;
}