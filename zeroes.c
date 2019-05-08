#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10],b[10],top,n,i;
    printf("enter the size of the array");
    scanf("%d",&n);
    printf("enter the elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    top=n-1;
    for(i=0;i<n;i++)
    {
        if(a[i]==0)
        {
            b[top]=a[i];
            top--;
        }
    }
    for(i=n-1;i>=0;i--)
    {
        if(a[i]!=0)
        {
            b[top]=a[i];
            top--;
        }
    }
    printf("the array is");
    for(i=0;i<n;i++)
    {
        printf("%d",b[i]);
    }
    printf("\n");
    return 0;
}
