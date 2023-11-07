#include<stdio.h>

int main()
{
    int ch;
    printf("Who I am to you? \n");
    printf("Enter number from 1 to 5 \n");
    scanf("%d",&ch);
    switch (ch)
    {
    case 1:
        printf("Friend");
        break;
    case 2:
        printf("Best Friend");
        break;
    case 3:
        printf("Bestie");
        break;
    case 4:
        printf("BRO");
        break;
    case 5:
        printf("Partner");
        break;

    default:
        printf("No one");
        break;
    }
    return 0;
}