#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    char s[100],temp;
    int p1=0,p2=0;
    printf("enter a string\n");
    gets(s);
    do{
    while(s[p2]!=' '&&s[p2]!='\0'||p1==p2+1)
    {
        p2++;
    }
    p2--;
    while(p1<=p2)
    {
        temp=s[p1];
        s[p1]=s[p2];
        s[p2]=temp;
        p1++;
        p2--;

    }
    while(s[p1]!=' '&&s[p1]!='\0')
    {
        p1++;
    }
    if(s[p1]=='\0')
    {
        break;
    }
    p1++;
    }while(s[p2]!=' '&&s[p2]!='\0');
    puts(s);
    return 0;
}
