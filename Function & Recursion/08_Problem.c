#include<stdio.h>

int fib(int );

int main()
{
    int f,f1=0,f2=1;
    printf("Enter the number\n");
    scanf("%d",&f);
    printf("%d %d",f1,f2);
    printf("The fabonachhi series is %d",fib(f));    
    return 0;
}

int fib(int f)
{
    int f1=0,f2=1;
    int result;
  result   = f1 + f2;
   //fib(n) = fib(n-1) + fib(n-2);
    return result;
    
}