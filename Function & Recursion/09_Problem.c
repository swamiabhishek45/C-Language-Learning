#include<stdio.h>

int main()
{
    int a=5;
    printf("%d %d %d",a , ++a, a++);     // compiler compile program from left to right
    return 0;
}