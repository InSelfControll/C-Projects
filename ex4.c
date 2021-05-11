/*
Assignment 1 Ofir Hamami ID: 315520965

int sum - for sum the ints.
int count - for count the digits in the number.
int number = for get the first number.
int smallest - for get the smallest digit in the number.
int largest - for get the largest digit in the number.
int remodel - for modulo line.
int reversedN - for check if the number is palindrome or not.
int original - for get the original number and equal is to the reversedN for check if palindrome or not.

*/

#include <stdio.h>
int main(void)
{
    int sum,count = 0, number, smallest, largest = 0, remodel, reversedN=0,original;
    printf("Enter an integer: ");
    scanf("%d", &number);
    original = number;
    while (number != 0)
    {
        remodel = number % 10;
        if (remodel > largest){
            largest = remodel;
        }
        if(remodel < smallest){
            smallest = remodel;
        }
        number = number / 10;
        ++count;
        reversedN = reversedN * 10 + remodel;
        sum = sum + remodel;
    }
    if (original == reversedN){
        printf("%d is a palindrome \n", original);
    }else{
        printf("%d is not a palindrome \n", original);
    }
    if (original % 2 != 0)
    {
        printf("The number is odd: %d \n", original);
    }
    printf("Sum of ints! %d \n", sum);
    printf("The Largest number! %d \n", largest);
    printf("The Smallest Number! %d \n", smallest);
    printf("Number of digits are: %d \n", count);
    return 0;
}
