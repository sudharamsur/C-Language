#include<stdio.h>
#define MAX 100
int main()
{
    int i,j,k,r1,r2,c1,c2,sum =0;;
    int a[MAX][MAX],b[MAX][MAX],c[MAX][MAX];
    printf("Enter the number of first Matrix row and column: ");
    scanf("%d%d",&r1,&c1);
    printf("Enter the number of Second Matrix row and column: ");
    scanf("%d%d",&r2,&c2);
    if (c1!=r2)
    {
        printf("invalid");

    }

    else{
    printf("Enter the element of first Matrix : \n");
    for (i=0; i<r1; i++)
    {
        for (j=0; j<c1; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("Enter the element of Second Matrix : \n");
    for (i=0; i<r2; i++)
    {
        for (j=0; j<c2; j++)
        {
            scanf("%d",&b[i][j]);
        }
    }

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



    printf("The Third Matrix : \n");
    for (i=0; i<r1; i++)
    {
        for (j=0; j<c2; j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }

}
}
