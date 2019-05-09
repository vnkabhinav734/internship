#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    int p1,p2;
    char s[20],temp;
    printf("enter the string");
    scanf("%s",s);
    p1=0;
    p2=strlen(s)-1;
    while(p1<=p2)
    {
        temp=s[p1];
        s[p1]=s[p2];
        s[p2]=temp;
        p1++;
        p2--;
    }
    printf("%s",s);
    return 0;
}
