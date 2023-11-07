#include<stdio.h>

int main()
{
    int a,b;
    printf("Before Swapping : \n");
    printf("Enter a=");
    scanf("%d",&a);

    printf("Enter b=");
    scanf("%d",&b);
    b=a+b;  // t=a; 
    a=b-a;  // a=b;
    b=b-a;  // b=t;
    printf("After Swapping : \n a=%d \n b=%d",a,b);
        return 0;
}