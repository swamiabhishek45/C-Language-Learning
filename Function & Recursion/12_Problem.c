#include<stdio.h>

void demo(int ,int);

int main()
{
    int l,b;
    printf("Enter the value of l and b\n");
    scanf("%d %d",&l,&b);
    demo(l,b);
    return 0;
}

void demo(int l,int b){
    int a;
    a = l * b;
    printf("Area of ractangle is %d",a);
}