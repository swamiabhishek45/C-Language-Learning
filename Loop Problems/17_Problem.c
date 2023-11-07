#include<stdio.h>

int main()
{
    int f=0,f1=1,f2=2,k;
    printf("Enter value of k");
    scanf("%d",&k);
    printf("\t %d \t %d",f,f1);
    while(f2<=k)
    {
        printf("\t %d",f2);
        f=f1;
        f1=f2;
        f2=f+f1;
    }
    return 0;
}               