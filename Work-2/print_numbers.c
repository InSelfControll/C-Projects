#include <stdio.h>
#include <math.h>
#include "menu_func.h"

int print_numbers(long int num)
{
   // int num;
    //while (1)
    //{
        //printf("What is your number? \n");
        //scanf("%d", &num);

        int tmp, Ldigit, Fdigit, ndigits = 0;
        Ldigit = num % 10; // Gets value of last digit
        tmp = num;
        while (tmp > 0)
        {
            tmp /= 10;
            ndigits++;
        }

        Fdigit = num / pow(10, ndigits - 1); // Gets value of first digit
        //printf("%d: %d digits\n", num, ndigits);
        //printf("Fdigit: %d, Ldigit: %d\n", Fdigit, Ldigit);

        // RRotate
        int RRotate_val;
        RRotate_val = (num - Ldigit) / 10 + Ldigit * pow(10, ndigits - 1); // Shifts the digits to the right by 1
        printf("Right rotate: %d\n", RRotate_val);

        // LRotate
        int LRotate_val;
        LRotate_val = (num - Fdigit * pow(10, ndigits - 1)) * 10 + Fdigit; // Shifts the digits to the left by 1
        printf("Left rotate: %d\n", LRotate_val);

        // Twice Print
        int digits[ndigits];
        for (int i = ndigits - 1; i >= 0; i--)
        {
            int index = ndigits - i - 1;
            digits[index] = (num / (int)pow(10, i)) % 10; // Gets each digit in successive order in a kinda convoluted way
            //printf("Index: %d, Value: %d\n", index, digits[index]);
        }
        printf("Twice: ");
        for (int i = 0; i < ndigits; i++)
        {
            printf("%d", digits[i]);
            printf("%d", digits[i]);
        }
        printf("\n");

        // Prime Decomposition
      //  bool isPrime = true;
        tmp = num;
        printf("Primes: ");

        // New prime decomposition algorithm idk how it works
        while (tmp % 2 == 0)
        {
            printf("%d ", 2);
            tmp /= 2;
        }

        for (int i = 3; i <= sqrt(tmp); i += 2)
        {
            while (tmp % i == 0)
            {
                printf("%d ", i);
                tmp /= i;
            }
        }

        if (tmp > 2)
        {
            printf("%d ", tmp);
        }
        printf("\n");
    //}
    return 0;
}