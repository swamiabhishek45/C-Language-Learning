#include<stdio.h>

int main()
{
    int a,b,l;
    printf("Enter two numbers \n");
    scanf("%d%d",&a,&b);
    l=(a>=b?a:b);
    printf("Largest Number = %d",l);
    return 0;
}