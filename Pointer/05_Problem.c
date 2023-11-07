#include<stdio.h>

int calc();
int main()
{
    
    calc();
        return 0;
}

int calc(){
    int sum;
    float avg;
    int a;
    int b;
    printf("Enter the value of a and b\n");
    scanf("%d %d",&a,&b);
    sum = a + b;
    printf("Sum = %d\n",sum);
    avg = a+b/2.0;
    printf("Average = %f\n",avg);
}



/*#include<stdio.h>

void calc(int a, int b, int *sum, float *avg) {
    *sum = a+b;
    *avg = *sum/2;
}
int main()
{
   int i,j, sum;
   float avg;
   printf("Enter the value of a and b\n");
   scanf("%d %d",&i,&j);
   calc(i,j,&sum,&avg);
   printf("THe value of sum %d \n",sum);
   printf("The value of average %f\n", avg);
    
    return 0;
}
*/