#include<stdio.h>
int max_value(int a,int b)
{
    if (a>b)
        return a;
    else
        return b;

}
int main()
{   int a,b;
    scanf("%d%d",&a,&b);
    int result = max_value(a,b);
    printf("%d",result);
}
