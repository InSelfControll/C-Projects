/*
Assignment 1 Ofir Hamami ID: 315520965
int i - for the for loops.
int total for get the total of all 5 numbers.
int n - for the number of times.
int a[4] - Array of 4 numbers to make the loop run on.
*/

#include <stdio.h>

int main(void){
        int i, total;
        int times = 4;
        int a[4];
        total = 0;
        printf("PLease enter 5 numbers: \n");
        for (i = 0; i < times; i++){
            if (scanf("%d \n", &a[i]) == 1){
                total += a[i];
            }
        }
        //printf("\n");
        printf("numbers are Even: \n");
        for (i = 0; i < times; i++){
            if (a[i] % 2 == 0){
                printf("%d \n", a[i]);
            }
        }
        //printf("\n");
        printf("numbers are Odds: \n");
        for (i = 0; i < times; i++){
            if (a[i] % 2 != 0){
                printf("%d \n", a[i]);
            }
        }
        printf("\nAverage = %f\n", total / (float)times);
        return 0;
        }
