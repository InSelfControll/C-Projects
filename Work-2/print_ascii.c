#include <stdio.h>
#include <math.h>
#include "menu_func.h"

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