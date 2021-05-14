#include <stdio.h>
#include <math.h>
#include "menu_func.h"
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
