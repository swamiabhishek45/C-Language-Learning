#include<stdio.h>
void printfPattern(int n);

int main()
{
    int n=4;
    printfPattern(n);    
    return 0;
}

void printfPattern(int n)
{
    if (n==1)
    {
        printf("*\n");
        return;
    }

    
    printfPattern(n-1);
    for(int i=0;i<(2*n-1);i++)
    {
        printf("*");
    }
    printf("\n");
}