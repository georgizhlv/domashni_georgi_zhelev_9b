#include<stdio.h>
#define MAX(a, b) ((a) > (b) ? (a) : (b))

void main()
{
    int a = 20;
    int b = 50;

    printf("The bigger one from %d and %d is %d",a,b,MAX(a,b));

}