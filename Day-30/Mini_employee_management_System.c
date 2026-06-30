#include <stdio.h>
int main ()
{
    int id[100],salary[100] ;
    char name[100][30] ;
    char department[100][30] ;
    int n = 0,choice,i ;
    do
    {
        printf("\n----- EMPLOYEE MANAGEMENT SYSTEM -----\n") ;
        printf("1. Add Employee\n") ;
        printf("2. Display Employees\n") ;
        printf("3. Exit\n") ;
        printf("Enter your choice : ") ;
        scanf("%d",&choice) ;
        switch(choice)
        {
            case 1:
                printf("Enter Employee ID : ") ;
                scanf("%d",&id[n]) ;
                printf("Enter Employee Name : ") ;
                scanf("%s",name[n]) ;
                printf("Enter Department : ") ;
                scanf("%s",department[n]) ;
                printf("Enter Salary : ") ;
                scanf("%d",&salary[n]) ;
                n++ ;
                printf("Employee Added Successfully!\n") ;
                break ;
            case 2:
                if(n == 0)
                {
                    printf("No Employee Records Available!\n") ;
                }
                else
                {
                    printf("\nID\tName\tDepartment\tSalary\n") ;
                    printf("-------------------------------------------------\n") ;
                    for(i = 0 ; i < n ; i++)
                    {
                        printf("%d\t%s\t%s\t\t%d\n",id[i],name[i],department[i],salary[i]) ;
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