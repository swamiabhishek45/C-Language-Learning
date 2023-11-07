#include<stdio.h>

int main()
{
    int r,h;
    float c;
    printf("Enter value of l and b \n");
    scanf("%d%d",&r,&h);
    c=3.14*r*r*h;
    printf("Area of cylinder = %f \n",c);
    
    return 0;
}