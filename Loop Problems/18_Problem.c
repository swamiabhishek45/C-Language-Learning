#include<stdio.h>

int main()
{
    int n=1,d=2,k;
    printf("Enter value of k\n");
    scanf("%d",&k);
    while(n<=k)
    {
        printf("\t %d",n);
        n+=d;
        d+=2;
    }
    return 0;
    
}