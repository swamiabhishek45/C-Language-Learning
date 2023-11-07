#include<stdio.h>

int main()
{
  int n,n1,d,sum=0;
  printf("Enter number\n");
  scanf("%d",&n);
  n1=n;
  while(n!=0)
  {
    d = n % 10;
    sum = sum + (d*d*d);
    n = n / 10;
  }
  if(n1==sum)
  {
    printf("Number is armstrong");
  }
  else
  {
    printf("number is not armstrong");
  }
  return 0;
}