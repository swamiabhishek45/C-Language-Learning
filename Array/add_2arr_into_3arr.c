#include<stdio.h>

int main()
{
    int a[5],b[5],c[5],i;
    printf("Enter first array elements\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter second array elements\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<5;i++)
    {
        c[i] = a[i] + b[i];
    }
    printf("Elements of resultant array are\n");
    for(i=0;i<5;i++)
    {
        printf("\n %d",c[i]);
    }

    return 0;
}