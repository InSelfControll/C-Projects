/*
Assignment 1 Ofir Hamami ID: 315520965
*/

//#include <conio.h>
//#include <iostream>
#include <stdio.h>
#include <math.h>

int main()
{
    float x1, y1;
    float x2, y2;
    float x3, y3;
    printf("Enter first point (x1,y1) real numbers: \n");
    scanf("%f%f", &x1, &y1);
    printf("Enter second point (x2,y2) real numbers: \n");
    scanf("%f%f", &x2, &y2);
    printf("Enter thrid point (x3,y3) real numbers: \n");
    scanf("%f%f", &x3, &y3);

    float asqr = pow(x1 - x2, 2) + pow(y1 - y2, 2);
    float bsqr = pow(x1 - x3, 2) + pow(y1 - y3, 2);
    float csqr = pow(x2 - x3, 2) + pow(y2 - y3, 2);

    if (asqr + bsqr == csqr || asqr + csqr == bsqr || csqr + bsqr == asqr)
        printf("Yes, it's a 90 degree traingle\n");
    else
        printf("it's not 90 degree traingle\n");
    return 0;
}