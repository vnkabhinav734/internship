#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[10],b[10],i,n,p1,p2,prod1,prod2;
    printf("enter the size");
    scanf("%d",&n);
    printf("enter the array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    p1=0;
    p2=n-1;
    i=n-1;
    while((p1<=p2)&&(i>=0))
    {
        prod1=a[p1]*a[p1];
        prod2=a[p2]*a[p2];
        if(prod1<prod2)
        {
            b[i]=prod2;
            i--;
            p2--;
        }
        else{
            b[i]=prod1;
            i--;
            p1++;
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d\t",b[i]);
    }
    return 0;
}
