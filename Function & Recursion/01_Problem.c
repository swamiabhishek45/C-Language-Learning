#include<stdio.h>

void person_1();
void person_2();
void person_3();

int main()
{
  person_1();
  printf("Function calling End\n");
    return 0;
}
 void person_1(){
    printf("Calling function 1\n");
    person_2();
 }
 void person_2(){
    printf("Calling function 2\n");
    person_3();
 }

void person_3(){
    printf("Calling function 3\n");
}