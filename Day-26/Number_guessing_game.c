#include <stdio.h>
int main ()
{
    int number = 18 ;
    int guess,i ;
    printf("You have 5 chances to guess the number\n") ;
    for(i = 1 ; i <= 5 ; i++)
    {
        printf("Enter your guess : ") ;
        scanf("%d",&guess) ;
        if(guess == number)
        {
            printf("Congratulations! You guessed the correct number") ;
            break ;
        }
        else if(guess > number)
        {
            printf("Too High!\n") ;
        }
        else
        {
            printf("Too Low!\n") ;
        }
    }
    if(i == 6)
    {
        printf("You lost! The correct number was %d",number) ;
    }
    return 0 ;
}