#include<stdio.h>

int main()
{
    int count = 1, i = 2,j, flag;
    printf("First 50 prime numbers are\n");
    while(count<=50)
    {
        flag = 0;
        for(j=2 ;j<=i/2 ;j++)
        {
            if(i%j == 0)
            {
                flag =1;
                break;
            }
        }
        if(flag == 0)
        {
            printf("%d \t",i);
            count ++;
        }
    }
    i++;
    return 0;
}