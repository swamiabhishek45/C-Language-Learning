#include<stdio.h>

int sum(int a, int b);      //Function Declaration
int main()
{
    int c;
    int a,b;
    printf("Enter value");
    scanf("%d %d",&a,&b);

    c = sum(a, b);          //Function Calling
    printf("The value of c is %d \n",c);
    
    return 0;
}

int sum (int a, int b)      // Function Defination
{
    int result;
    result = a + b;
    return result;
}