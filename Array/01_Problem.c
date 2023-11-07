#include<stdio.h>

int main()
{
    int i, a[5];
    printf("Enter five array element\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Array elements are\n");
    for ( i=0;i<5;i++)      
    {
        printf("\n %d",a[i]);
    }
    
    return 0;
}