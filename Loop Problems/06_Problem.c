#include<stdio.h>

int main()
{
    int n,i,f=1;
    printf("Enter a number \n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    printf("Factorial(n!) of = %d",f);

    return 0;
}