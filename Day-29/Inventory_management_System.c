#include <stdio.h>
int main ()
{
    int id[100],qty[100] ;
    char name[100][30] ;
    float price[100] ;
    int n = 0,choice,i ;
    do
    {
        printf("\n----- Inventory Management System -----\n") ;
        printf("1. Add Product\n") ;
        printf("2. Display Products\n") ;
        printf("3. Exit\n") ;
        printf("Enter your choice : ") ;
        scanf("%d",&choice) ;
        switch (choice)
        {
            case 1:
                printf("Enter Product ID : ") ;
                scanf("%d",&id[n]) ;
                printf("Enter Product Name : ") ;
                scanf("%s",name[n]) ;
                printf("Enter Quantity : ") ;
                scanf("%d",&qty[n]) ;
                printf("Enter Price : ") ;
                scanf("%f",&price[n]) ;
                n++ ; 
                printf("Product Added Successfully!\n") ;
                break ;
            case 2:
                if (n == 0)
                {
                    printf("No Products Available!\n") ;
                }
                else
                {
                    printf("\nID\tName\tQuantity\tPrice\n") ;
                    printf("------------------------------------------\n") ;
                    for (i = 0 ; i < n ; i++)
                    {
                        printf("%d\t%s\t%d\t\t%.2f\n",id[i], name[i], qty[i], price[i]) ;
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