#include<stdio.h>

int main()
{
    int i,l,a[5];
    printf("Enter five array elements\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    l = a[0];
    for(i=0;i<5;i++)
    {
        if(a[i]>l)
        {
            l = a[i];
        }
    }
    printf("Largest element = %d",l);
    return 0;
}