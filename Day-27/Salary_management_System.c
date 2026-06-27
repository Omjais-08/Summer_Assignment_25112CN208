#include <stdio.h>
struct emp
{
    int eid ;
    char ename[20] ;
} ;
int main ()
{
    struct emp e ;
    float basic,hra,da,total ;
    printf("Enter Employee ID : ") ;
    scanf("%d",&e.eid) ;
    printf("Enter Employee Name : ") ;
    scanf("%s",&e.ename) ;
    printf("Enter Basic Salary : ") ;
    scanf("%f",&basic) ;
    hra = basic * 0.20 ;
    da = basic * 0.10 ;
    total = basic + hra + da ;
    printf("\nEmployee ID : %d\n",e.eid) ;
    printf("Employee Name : %s\n",e.ename) ;
    printf("Basic Salary : %.2f\n",basic) ;
    printf("HRA : %.2f\n",hra) ;
    printf("DA : %.2f\n",da) ;
    printf("Total Salary : %.2f\n", total) ;
    return 0 ;
}