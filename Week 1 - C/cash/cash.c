clude<cs50.h>
#include <stdio.h>

    int main(void)
{
    int change = get_int("Change owed: ");
    int c = 0;
    while (change >= 25)
    {
        c++;
        change -= 25;
    }

    while (change >= 10)
    {
        c++;
        change -= 10;
    }

    while (change >= 5)
    {
        c++;
        change -= 5;
    }

    while (change >= 1)
    {
        c++;
        change -= 1;
    }
    printf("%i\n", c);
}