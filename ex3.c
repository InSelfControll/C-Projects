/*
Assignment 1 Ofir Hamami ID: 315520965
*/

#include <stdio.h>
int main()
{
    long long n;
    int count = 0, i, times = 3;
    printf("Enter an integer: ");
    for (i = 0; i < times; i++)
    {
        scanf("%lld", &n);
        while (n != 0)
        {
            n /= 10; // n = n/10
            ++count;
        }

        if (count < 4)
        {
            printf("bad input! \n");
            break;
        }
    }
    printf("Number of digits: %d \n", count);

    return 0;
}