// CS50-pset1-credit

#include <stdio.h>
#include <cs50.h>

void card(long numb);



int main(void)
{
    long numb = get_long("number: ") ;

    card (numb) ;
}








void card(long numb)
{
    int sum = 0 ;
    int AMEX = (numb % 1000000000000000 - numb % 10000000000000) / 10000000000000 ;
    int MC = (numb % 10000000000000000 - numb % 100000000000000) / 100000000000000 ;
    int VISA16 = (numb % 10000000000000000 - numb % 1000000000000000) / 1000000000000000 ;
    int VISA13 = (numb % 10000000000000 - numb % 1000000000000) / 1000000000000 ;
    
    for (int i = 0 ; numb != 0 ; i++)
    {
        int cont1 = ((numb % 100 - numb % 10) / 10) * 2 ;
        cont1 = (cont1 % 10) + (cont1 % 100 - cont1 % 10) / 10 ;
        sum = sum + cont1 + (numb % 10);
        numb = numb / 100 ;
    }

    
    if (sum % 10 != 0)
    {
        printf("INVALID\n");
    }
    else
    {
        if (AMEX == 34 || AMEX == 37)
        {
            printf("AMEX\n");
        }
        
        else if (MC == 51 || MC == 52 || MC == 53 || MC == 54 || MC == 55)
        {
            printf("MASTERCARD\n");
        }
        
        else if (VISA16 == 4 || VISA13 == 4)
        {
            printf("VISA\n");
        }
        
        else
        {
            printf("INVALID\n");
        }
    }
}
