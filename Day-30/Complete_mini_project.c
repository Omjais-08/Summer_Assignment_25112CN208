#include <stdio.h>
int id[100], age[100],n = 0 ;
char name[100][30] ;
char disease[100][30] ;
void addPatient()
{
    printf("Enter Patient ID : ") ;
    scanf("%d",&id[n]) ; 
    printf("Enter Patient Name : ") ;
    scanf("%s",name[n]) ;
    printf("Enter Age : ") ;
    scanf("%d",&age[n]) ;
    printf("Enter Disease : ") ;
    scanf("%s",disease[n]) ;
    n++ ;
    printf("Patient Added Successfully!\n") ;
}
void displayPatients()
{
    int i ;
    if (n == 0)
    {
        printf("No Patient Records Available!\n") ;
        return ;
    }
    printf("\nID\tName\tAge\tDisease\n") ;
    printf("----------------------------------------\n") ;
    for (i = 0 ; i < n ; i++)
    {
        printf("%d\t%s\t%d\t%s\n",id[i], name[i], age[i], disease[i]) ;
    }
}
int main()
{
    int choice ;
    do
    {
        printf("\n----- HOSPITAL MANAGEMENT SYSTEM -----\n") ;
        printf("1. Add Patient\n") ;
        printf("2. Display Patients\n") ;
        printf("3. Exit\n") ;
        printf("Enter your choice : ") ;
        scanf("%d",&choice) ;
        switch (choice)
        {
            case 1:
                addPatient() ;
                break ;
            case 2:
                displayPatients() ;
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