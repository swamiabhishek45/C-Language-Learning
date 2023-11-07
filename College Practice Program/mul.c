#include<stdio.h>

int main()
{
    
    int n,i;
    printf("Enter number\n");
    scanf("%d",&n);
    printf("Multiplication table\n");
    for(i=1;i<=10;i++)
    {
        printf("n*%d = %d \n",i,n*i);
    }
    return 0;    

}