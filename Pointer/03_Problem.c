#include<stdio.h>

int printfAdd(int a){
    printf("The address of a is %u\n",&a);
}

int main()
{
    int i = 4;
    printf("the value of variable i is %d\n",i);
    printfAdd(i);
    printf("the address of variable i is %u\n",&i);
    return 0;
}
