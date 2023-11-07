#include<stdio.h>

int main()
{
    int a,b,x;
    printf("Enter two numbers \n");
    scanf("%d %d",&a,&b);
    x=a+b;
    printf("Addition  = %d \n",x);
    x=a-b;
    printf("Substraction = %d \n",x);
    x=a*b;
    printf("MUltiplication = %d \n",x);
    x=a/b;
    printf("Division = %d \n",x);
    x=(int)a%(int)b;
    printf("Modulas = %d \n",x);
    return 0;
}