#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    char s[50];
    char s2[10]="0123456789";
    int i,j;
    printf("enter the string");
    scanf("%s",s);
    for(i=0;s[i]!='\0';i++)
    {
        j=0;
        while(j<10)
        {
            if(s[i]==s2[j])
            {
                break;
            }
            else{
                j++;
            }
        }
        if(j==10){
            printf("there are letters");
            break;
        }
        }
        if(s[i]=='\0')
        {
            printf("there are only digits");
        }
    return 0;
}
