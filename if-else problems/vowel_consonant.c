#include<stdio.h>

int main()
{
    char ch;
    printf("Enter character \n");
    scanf("%c",&ch);
    if(ch=='a'|| ch=='e'|| ch=='i'|| ch=='o'|| ch=='u')
    {
        printf("VOWEL");
    }
    else
    {
        printf("CONSONANT");
    }
        return 0;
}