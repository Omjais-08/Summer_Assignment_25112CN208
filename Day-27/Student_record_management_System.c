#include <stdio.h>
struct stu
{
    int sroll ;
    char sname[20] ;
    int marks[5] ;
} ;
int main ()
{
    struct stu s ;
    int i ;
    float total = 0 ;
    float avg ;
    printf("Enter Sroll : ") ;
    scanf("%d",&s.sroll) ;
    printf("Enter Sname : ") ;
    scanf("%s",&s.sname) ;
    printf("Enter 5 subject Smarks :") ;
    for ( i = 0 ; i < 5 ; i++)
    {
        scanf("%d",&s.marks[i]) ;
        total = total + s.marks[i] ;
        avg = (total / 5) ;
    }
    printf("Sroll : %d\n",s.sroll) ;
    printf("Sname : %s\n",s.sname) ;
    printf("Stotal marks : %f\n",total) ;
    printf("Savg : %f\n",avg) ;
    return 0 ;
}