#include<stdio.h>

#include"mylib.h"

int factorial(int n)
{
    if (n == 1) return 1;

    if (n > 1 ) return n * factorial(n - 1);
}

int anotherfunc(int n)
{
    return 0;
}   
