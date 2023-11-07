#include<stdio.h>

int main()
{
    int i,j,k=15;
    for(i=5;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("\t%d",k);
            k--;
        }
        printf("\n");
    }
    return 0;
}