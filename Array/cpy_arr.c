#include<stdio.h>

int main()
{
    int a[5],b[5],i;
    printf("Enter array elements\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        b[i] = a[i];
    }
    printf("Elements in array b are \n");
    for(i=0;i<5;i++)
    {
        printf("\n %d",b[i]);
    }
    return 0;
}