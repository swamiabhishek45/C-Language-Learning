#include<stdio.h>

int main()
{
   int a[5],i;
   //printf("Enter array elements\n");
   //scanf("%d",&a[i]);
    printf("Array in reverse order\n");
    for(i=5;i>0;i--)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}