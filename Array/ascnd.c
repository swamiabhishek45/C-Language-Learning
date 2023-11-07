#include<stdio.h>

int main()
{
    int i,j,t,a[5];
    printf("Enter five array elements\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        for(j=j+1;j<5;j++)
        {
            if(a[i]>a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j=t];
            }
        }
    }
    printf("Array elements in ascending order are\n");
    for(i=0;i<5;i++)
    {
        printf("\n %d",a[i]);
    }
    return 0;
}