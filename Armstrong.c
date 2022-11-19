#include<stdio.h>
int main()
{
    int num,q,count,cnt,mel=1;


    printf("Enter a Number: ");

    scanf("%d",&num);
    q=num;
    count=0;
    while(q!=0)
    {
        q=q/10;
        count++;      //this loop is for counting digits
    }
    printf("It has %d digits \n",count);

    q= num;
    int sum=0,a;

    while(q!=0)
    {

        a=q%10;
        cnt=count;
        while(cnt!=0)
        {
            mel=mel*a; // This loop is for pow
            cnt--;
        }

        sum=sum+mel;
        q=q/10;
        //cnt=count;
        //mel=1;


    }
    if (sum==num)
    {
        printf("The Number is Armstrong");
    }
    else
    {
        printf("The Number is not Armstrong");
    }

}
