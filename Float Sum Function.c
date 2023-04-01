#include<stdio.h>

float sum(float a,float b) //function defination
{
   float sum=0;

   sum=a+b;
   printf("%f",sum);
}
int main()
{
    sum(6.5,7);        // function call
}

