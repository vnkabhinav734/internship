#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char s[20];
    int i,j;
    printf("enter the string");
    scanf("%s",s);
    j=strlen(s)-1;
    for(i=0;i<strlen(s)/2;)
    {
        if(s[i]-s[j]==32||s[j]-s[i]==32||s[i]-s[j]==0)
        {
            i++;
            j--;
            if(i>=j)
            {
                printf("palindrome\n");
                break;
            }
        }
        else{
            break;
        }
    }
        if(i<j){
            printf("not a palindrome\n");
        }
    return 0;
}
