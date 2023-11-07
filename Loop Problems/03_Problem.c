#include<stdio.h>

int main()
{
    int i,sum=0,n=10;
    while(i<=n)
    {
        sum +=i;
        i++;
    }
    printf("The value of sum(1 to 10) is %d",sum);
    return 0;
}