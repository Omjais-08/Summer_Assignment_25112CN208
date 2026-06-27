#include <stdio.h>
struct student
{
    int roll ;
    char name[20] ;
    int marks[5] ;
} ;
int main ()
{
    struct student s ;
    int i ;
    float total = 0 ;
    float avg ;
    printf("Enter Roll Number : ") ;
    scanf("%d",&s.roll) ;
    printf("Enter Student Name : ") ;
    scanf("%s",&s.name) ;
    printf("Enter Marks of 5 Subjects :\n") ;
    for(i = 0 ; i < 5 ; i++)
    {
        scanf("%d",&s.marks[i]) ;
        total = total + s.marks[i] ;
    }
    avg = total / 5 ;
    printf("\nRoll Number : %d\n",s.roll) ;
    printf("Student Name : %s\n",s.name) ;
    printf("Marks : ") ;
    for(i = 0 ; i < 5 ; i++)
    {
        printf("%d ",s.marks[i]) ;
    }
    printf("\nTotal Marks : %f",total)  ;
    printf("\nAverage : %.2f",avg) ;
    if(avg >= 40)
        printf("\nResult : Pass") ;
    else
        printf("\nResult : Fail") ;
    return 0 ;
}