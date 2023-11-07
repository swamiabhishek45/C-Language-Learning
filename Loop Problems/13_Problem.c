#include<stdio.h>

int main()
{
    int i,j;
    for(i=1;i<=5;i+=1)
    {
        for(j=1;j<=i;j+=1)
        {
            printf("\t %d",j);
        }
        printf("\n");
    }
    return 0;
}