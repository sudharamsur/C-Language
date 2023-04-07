#include<stdio.h>
void odd ();
void even ();
int a,b;

void odd ()
{

    while (a<b+1)
    {
        printf("%d ",a+1);
        a++;
        even();
    }

}
void even ()
{

    while(a<b+1)
    {
        printf("%d ",a-1);
        a++;
        odd ();
    }

}
int main()
{

    scanf("%d",&a);
    scanf("%d",&b);
    if (a%2!=0)
    {
        odd();
    }
    else
    {
        even();
    }
}

