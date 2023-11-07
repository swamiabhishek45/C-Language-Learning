#include<stdio.h>

int main()
{
    int n,d,sum=0;
    printf("Enter a number \n");
    scanf("%d",&n);
    while(n!=0)
    {
        d=n%10;
        sum=sum*10+d;
        n=n/10;
    }
    printf("Reverse number = %d",sum);
    return 0;
}