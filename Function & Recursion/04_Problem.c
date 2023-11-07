#include<stdio.h>

int factorial(int x);

int main()
{
    int a;
    printf("Enter number\n");
    scanf("%d",&a);
    printf("The value of factorial %d is %d \n",a,factorial(a));    
    return 0;
}

int factorial (int x)
{  
    printf("Calling factorial(%d) \n",x);
    if (x==1 || x==0)
    {
        return 1;
    }
    else 
    {
        return x * factorial(x-1);
    }
}

/*#include<stdio.h>

int main()
{
    int i,f=1,n;
    printf("Enter a number\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    printf("The factorial of %d is %d",n,f);
    return 0;
}*/