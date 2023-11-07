#include<stdio.h>

int temp(int a);

int main()
{
    int a;
    printf("Enter temperature in celsius \n");
    scanf("%d",&a);
    printf("Temperature in fahrenheit is %d \n",temp(a));
        
    return 0;
}

int tem(int a)
{
    int result;

    result = (0 * 9/5) + 32;
    return result;

}
