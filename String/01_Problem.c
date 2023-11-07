#include<stdio.h>
#include<string.h>

int main()
{
    char str[20];
    printf("Enter string\n");
    gets(str);
    printf("Lowwer case = %s\n",strlwr(str));
    printf("Upper case = %s\n",strupr(str));
    printf("Reverse Order = %s\n",strrev(str));
    return 0;
}

