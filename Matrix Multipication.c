#include<stdio.h>

int main()
{
    int i,j,k,r1,r2,c1,c2;
    int a[100][100],b[100][100],c[100][100];
    scanf("%d%d",&r1,&c1);

    for (i=0; i<r1; i++)
    {
        for (j=0; j<c1; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    scanf("%d%d",&r2,&c2);

    for (i=0; i<r2; i++)
    {
        for (j=0; j<c2; j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    int sum =0;
    for (i=0; i<r1; i++)
    {
        for (j=0; j<c2; j++)
        {
            for (k=0; k<c1; k++)
            {
                sum+= a[i][k] * b[k][j];
            }
            c[i][j]=sum;
            sum=0;
        }

    }
    for (i=0; i<r1; i++)
    {
        for (j=0; j<c2; j++)
        {
            printf("%d ",c[i][j]);
        }
         printf("\n");
    }

}