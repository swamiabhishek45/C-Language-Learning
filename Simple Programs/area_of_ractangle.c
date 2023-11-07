#include<stdio.h>

int main()
{
    int l,b,a,p;
    printf("Enter value of l and b \n");
    scanf("%d%d",&l,&b);
    a=l*b;
    printf("Area of ractangle = %d \n",a);
    p=2*l + 2*b;
    printf("Perimeter of ractangle = %d",p);
    return 0;
}