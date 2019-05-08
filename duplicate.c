#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[50],i,n,t,c,d,count,v;
    printf("enter number of elements");
    scanf("%d",&n);
    printf("enter the elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
     for (c = 1 ; c <= n - 1; c++) {
    d = c;

    while ( d > 0 && a[d-1] > a[d]) {
      t          = a[d];
      a[d]   = a[d-1];
      a[d-1] = t;

      d--;
    }
  }
        for(i=0;i<n;)
        {
            count=0;
            v=a[i];
            i++;
            while(a[i]==v)
            {
                i++;
                count++;
            }
            if(count>0)
            {
                printf("%d\n",v);
            }
        }

    return 0;
}
