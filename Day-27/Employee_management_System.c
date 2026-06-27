#include <stdio.h>
struct emp
{
    int id ;
    char name[20] ;
    float salary ;
};
int main ()
{
    struct emp e ;
    printf("Enter Employee ID : ") ;
    scanf("%d",&e.id) ;
    printf("Enter Employee Name : ") ;
    scanf("%s",&e.name) ;
    printf("Enter Employee Salary : ") ;
    scanf("%f",&e.salary) ;
    printf("\nEmployee Details\n") ;
    printf("Employee ID : %d\n",e.id) ;
    printf("Employee Name : %s\n",e.name) ;
    printf("Employee Salary : %.2f\n",e.salary) ;
    return 0;
}