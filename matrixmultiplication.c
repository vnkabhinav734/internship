#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r1,r2,c1,c2,i,j,k,a[10][10],b[10][10],c[10][10];
    printf("enter the no. of rows of first matrix");
    scanf("%d",&r1);
    printf("enter the no. of columns of first matrix");
    scanf("%d",&c1);
    printf("enter the no. of rows in second matrix");
    scanf("%d",&r2);
    printf("enter the no. of columns in second matrix");
    scanf("%d",&c2);
    if(c1==r2)
    {
        printf("enter the elements of first matrix");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
         printf("enter the elements of second matrix");
        for(i=0;i<r2;i++)
        {
            for(j=0;j<c2;j++)
            {
                scanf("%d",&b[i][j]);
            }
        }
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {   c[i][j]=0;
                for(k=0;k<c2;k++)
                {
                    c[i][j]=c[i][j]+a[i][k]*b[k][j];
                }
            }
        }
    printf("product matrix is:\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }

    }
    else
    {
        printf("not possible");
    }

}
