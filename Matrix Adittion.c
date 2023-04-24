#include<stdio.h>

int main()
{
    int i,j,m,n;
    int a[100][100],b[100][100],c[100][100];
    scanf("%d",&n);
    scanf("%d",&m);
    for (i=0; i<m; i++)
    {
        for (j=0; j<n; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    for (i=0; i<m; i++)
    {
        for (j=0; j<n; j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    // adding matrix
    for (i=0; i<m; i++)
    {
        for (j=0; j<n; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }

    }
    for (i=0; i<m; i++)
    {
        for (j=0; j<n; j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
}
