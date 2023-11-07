#include<stdio.h>

int main()
{
    int a,b,c;
    printf("Enter three number");
    scanf("%d %d %d",&a ,&b ,&c);
    if(a>=b)
    {
        if(a>=c)
        {
            printf("a is largest number\n");
        }
        else{
            printf("c is largest number\n");
    
        }
    }
    else{
        if(b>=c)
        {
            printf("b is largest number\n");
        }
        else{
            printf("c is largest number");
            
        }
    }
    return 0;
}