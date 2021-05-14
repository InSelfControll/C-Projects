#include <stdio.h>
#include "menu_func.h"
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
            long int num;
            printf("Write your number: ");
            scanf("%ld", &num);
            if (num >= 1000)
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
    return 1;
}

int main()
{
    menu();
    return 0;
}
