#include <stdio.h>
#include <stdlib.h>

int main()
{
    int low,high,mid,a[10],n,x,i;
    printf("enter the size");
    scanf("%d",&n);
    printf("enter the array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the element to be searched");
    scanf("%d",&x);
    high=n-1;
    low=0;
    while(low<high)
    {
        mid=(low+high)/2;
        if(a[mid]==x)
        {
            printf("element found\n");
            break;
        }
        else if(a[mid]<x)
        {
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    if(low==high)
    {
        printf("element not found");
    }
    return 0;
}
