#include<stdio.h>

int main()
{
    int a,b,c;
    printf("Enter the value of a,b\n");
    scanf("%d%d",&a,&b);
    c = (a*a)+(b*b)+(2*a*b);
    printf("Answer = %d",c);
    return 0;
}
