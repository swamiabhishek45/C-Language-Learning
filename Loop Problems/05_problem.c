#include<stdio.h>

int main()
{
    int n;
    n=101;
    while(n<=200)
    {
        if(n%7==0)
        {
            printf("%d \n",n);
        }
        n++;
    }

    return 0;
}