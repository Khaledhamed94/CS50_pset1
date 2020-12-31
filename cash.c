#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    float change;
    do
    {
     change = get_float("Change owed: \n");
    }
    while(change < 0.00);

    change = round(change * 100);
    int coins = 0 ;
    int x = change ;

    while (x >= 25)
    {
        if(x % 25 == 0)
        {
            coins = coins + (x / 25) ;
            x = x % 25 ;
        }
        else
        {
        x = x - 25 ;
        coins++ ;
        }
    }

    while (x >= 10)
    {
        if (x % 10 == 0)
        {
            coins = coins + (x / 10) ;
            x = x % 10 ;
        }
        else
        {
        x = x - 10 ;
        coins++ ;
        }
    }

    while(x >= 5)
    {
        if (x % 5 == 0)
        {
            coins = coins + (x / 5) ;
            x = x % 5 ;
        }
        else
        {
        x = x - 5 ;
        coins++ ;
        }
    }

    while(x >= 1)
    {
            coins = coins + (x / 1) ;
            x = x % 1 ;
    }
    printf("%i\n", coins) ;
}
