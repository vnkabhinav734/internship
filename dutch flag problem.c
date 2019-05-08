#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    int i=0,j=0,k=0,l=0;
    char c1,c2,c3,s[20],s2[20],s3[20],s4[20];
    printf("enter the three parameters");
    scanf(" %c %c %c",&c1,&c2,&c3);
    printf("enter the string");
    scanf("%s",s);
    while(s[i]!='\0')
    {
        if(s[i]==c1)
        {
            s2[j]=s[i];
            i++;
            j++;
        }
        else if(s[i]==c2){
            s3[k]=s[i];
            i++;
            k++;
        }
        else if(s[i]==c3)
        {
            s4[l]=s[i];
            i++;
            l++;
        }
        else{
            printf("wrong entry\n");
            break;
        }
    }
    i=0;
    while(s2[i]==c1)
    {
        printf("%c",s2[i]);
        i++;
    }
    j=0;
    while(s3[j]==c2){
        printf("%c",s3[j]);
        j++;
    }
    k=0;
    while(s4[k]==c3)
    {
        printf("%c",s4[k]);
        k++;
    }
    printf("\n");
    return 0;
}
