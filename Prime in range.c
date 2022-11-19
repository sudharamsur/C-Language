#include<stdio.h>

int main()
{   int num1,num2,q,count;
    printf("Enter 1st Number: ");
    scanf("%d",&num1);
    printf("Enter 2nd Number: ");
    scanf("%d",&num2);

    for (int j=num1; j<=num2; j++)
    {

        count=0;
        for(int i=2 ; i<=j; i++)
        {

            q=j%i;

            if(q==0)
            {
                count++;

            }

        }
        if (count==1)


            printf("%d ",j);



    }

}
