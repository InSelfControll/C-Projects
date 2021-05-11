#include <stdio.h>

int print_triangle()
{
    int i, j;
    char input, alphabet = 'A';
    printf("Enter an uppercase character you want to print in the last row: ");
    scanf("%c", &input);
    for (i = 1; i <= (input - 'A' + 1); ++i)
    {
        for (j = 1; j <= i; ++j)
        {
            printf("%c ", alphabet);
        }
        ++alphabet;
        printf("\n");
    }
    return 0;
}
int menu()
{
    int choice;
    while (choice != 5)
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
            unsigned char count;
            for (count = 32; count < 127; count += 1)
            {
                printf("  %3d - %c ", count, count);
                printf(" Hexa: %x \t ", count);
                if (count % 6 == 0)
                    printf("\n");
            }
            printf("\n");
            break;
        }
        case 2:
        {
            int i, j, rows;
            printf("Enter the number of rows: ");
            scanf("%d", &rows);
            for (i = 1; i <= rows; ++i)
            {
                for (j = 1; j <= i; ++j)
                {
                    printf("%d ");
                }
                printf("\n");
            }
            break;
        }
        case 3:
        {
            print_triangle();
            printf("\n");
            break;
        }
        case 4:
        {
            break;
        }
        break;
        }
        return 0;
    }
    return 0;
}

int main()
{
    menu();
    return 0;
}
