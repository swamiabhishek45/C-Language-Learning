// WAP to print a address of a variable. Use this address to get the value of this variable


#include<stdio.h>

int main()
{
    int a=6;
    int *ptr;
    ptr = &a;
    
    printf("The address of variable is %u \n",ptr);
    printf("The value of variable is %d \n",*ptr);

    return 0;
}