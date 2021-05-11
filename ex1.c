/* Assignment: 1
Assignment 1 Ofir Hamami ID: 315520965
*/
#include <stdio.h>

using namespace std;
int main(void)
{
    printf("Please write 4 numbers: ");
    float a, b, c, d, s ;
    scanf(" %f", &a);
    scanf(" %f", &b);
    scanf(" %f", &c);
    scanf(" %f", &d);
    s = a + b + c + d;
    int v = (int)s;
    printf("%f\n", s);
    printf("%d \n",v);
}
