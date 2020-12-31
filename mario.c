#include <stdio.h>
#include <cs50.h>

int main()
{
    int height;

    do
    {
        height = get_int("height: \n") ;
    }
    while (height > 8 || height < 1);

    int space = height;

    for (int i = 0 ; i < height ; i++)
    {
        for (int s = space ; s > 1; s--)
        {
            printf(" ") ;
        }

        for (int n = 0 ; n <= i ; n++)
        {
            printf("#") ;
        }

        printf("\n") ;
        space--;
    }
}
