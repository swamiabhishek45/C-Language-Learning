#include<stdio.h>

int main()
{
    int n,i,f=1;
    printf("Enter number\n");
    scanf("%d",&n);              // 5
    for(i=1;i<=n;i++)            // 1 * 2 * 3 * 4 * 5
    {
        f=f*i;
    }
    printf("Factorial of %d is %d",n,f);

    return 0;
}


