#include <stdio.h>
int main ()
{
    char a[50] ;
    int i,vowel = 0,cons = 0 ;
    printf("\nEnter a String : ") ;
    gets(a) ;
    i = 0 ;
    while(a[i] != '\0')
    {
        if((a[i] >= 65 && a[i] <= 90) || (a[i] >= 97 && a[i]<= 122))
        {
            if(a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u' ||
               a[i] == 'A' || a[i] == 'E' || a[i] == 'I' || a[i] == 'O' || a[i] == 'U')
            vowel++ ;
            else
            cons++ ;
        }
        i++ ;
    }
    printf("\nTotal Vowels = %d and total Consonants = %d",vowel,cons) ;
    return 0 ;
}