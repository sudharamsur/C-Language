#include<stdio.h>

int main()
{   int num;
    printf("Enter a Number: ");
    scanf("%d",&num);
    int count;
    for(int i=2 ; i<=num; i++)
    {
          if(num%i==0)
        {
            count ++;

        }

    }
        if (count>1)
        {

        printf("Not a Prime Number");

        }
        else

        {
            printf("Prime Number");
        }

    return 0;
}
