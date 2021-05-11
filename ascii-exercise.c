#include <stdio.h>
#include <math.h>

int print_triangle()
{
    int r, c, k, m, i;
    printf("Enter the number of lines : ");
    scanf("%d", &m);
    for (r = 1; r <= m; r++)
    {
        i = 0;
        for (c = 1; c <= m - r; c++)
        {
            printf(" ");
        }
        for (k = 1; k <= r; k++)
        {
            printf("%c ", 65 + i);
            i++;
        }
        printf("\n");
    }
    getchar();
    return 0;
}

int print_ascii()
{
    unsigned char count;
    for (count = 32; count < 127; count += 1)
    {
        printf("  %3d - %c ", count, count);
        printf(" Hexa: %x \t ", count);
        if (count % 6 == 0)
            printf("\n");
    }
    printf("\n");
    return 0;
}
int print_pascal_triangle()
{
    int rows, coef = 1, space, i, j;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    for (i = 0; i < rows; i++)
    {
        for (space = 1; space <= rows - i; space++)
            printf("  ");
        for (j = 0; j <= i; j++)
        {
            if (j == 0 || i == 0)
                coef = 1;
            else
                coef = coef * (i - j + 1) / j;
            printf("%4d", coef);
        }
        printf("\n");
    }
    return 0;
}
int print_numbers(int num)
{
    int tmp, ndigits, digit;

    //printf("Write your number: ");
    //scanf("%d", &num);
    ndigits = 0;
    digit = num % 10;
    num /= 10;
    tmp = num;
    while (tmp > 0)
    {
        tmp /= 10;
        ++ndigits;
    }
    num += pow(10, ndigits) * digit;
    printf("Rotated Left: %d\n", num);
    printf("Rotated Right: %d\n", num);
    return 0;
}

int menu()
{
    int choice;
    for (choice = 1; choice <= 5; choice++)
    {
        printf("Menu \n");
        printf("1: ASCII table\n");
        printf("2: Pascal Triangle\n");
        printf("3: Triangle of letters\n");
        printf("4: Numbers\n");
        printf("5: Exit\n");
        printf("Choose one of the option: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        {
            print_ascii();
            break;
        }
        case 2:
        {
            print_pascal_triangle();
            break;
        }
        case 3:
        {
            print_triangle();
            break;
        }
        case 4:
        {
            int num;
            printf("Write your number: ");
            scanf("%d", &num);
            if (num >= 0)
            {
                print_numbers(num);
                break;
            }
            else
            {
                printf("Can't use negative numbers! \n");
                continue;
            }
        }
        case 5:
        {
            printf("Goodbye :) \n");
            break;
        }
        case 6:
        {
            if (choice > 5)
            {
                printf("Wrong option.\n");
                --choice;
            }
        }
            // break;
        }
        return 0;
    }
    /*    while (choice != 5)
    {
    }*/
    return 1;
}

int main()
{
    //print_triangle();
    menu();
    return 0;
}
