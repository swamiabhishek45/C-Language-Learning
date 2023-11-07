#include<stdio.h>

int main()
{
    int d;
    int m,y;
    printf("Enter days ");
    scanf("%d",&d);
    y=d/365;
    d=d%365;
    m=d/30;
    d=d%30;
    printf("Year = %d \n",y); 
    printf("Months = %d \n",m); 
    printf("Days = %d",d); 
    return 0;
}