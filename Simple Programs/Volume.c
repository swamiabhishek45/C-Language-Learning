#include<stdio.h>

int main()
{
    int r,h;
    float v;
    printf("Enter the value of r and h\n");
    scanf("%d %d",&r,&h);
    
    v = 0.33*3.14*r*r*h;
    printf("Value is = %f",v);   
    return 0;
}