#include<stdio.h>

int main()
{
    int a,b,c,T;
    float Avg;
    printf("Enter three number \n");
    scanf("%d%d%d",&a,&b,&c);
    T=a+b+c;
    printf("Total = %d \n",T);
    Avg=T/3.0;
    printf("Average = %f",Avg);
    return 0;
}