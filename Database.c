# include <stdio.h>
# include <string.h>
#include<stdlib.h>
int number;
void alldisplay();
void EmpId();
void FirstName();
void LastName();
void Date();
void City();
void Title();
void Dept();
//void OneColumnDisplay(char [10]);
struct record
{
char EmpId[100],FirstName[30],LastName[50],Date[50],City[50],Title[100],Dept[50];
}property[100];

int main( )
{
FILE *fp=fopen("employee.txt","r");
int i=0,count=1;
char line[100],*p,query[30],ch;
while(fscanf(fp,"%s",line)!=EOF)
{
p=strtok(line,",");
strcpy(property[i].EmpId,p);
p=strtok(NULL,",");
strcpy(property[i].FirstName,p);
p=strtok(NULL,",");
strcpy(property[i].LastName,p);
p=strtok(NULL,",");
p=strcpy(property[i].Date,p);
p=strtok(NULL,",");
strcpy(property[i].City,p);
p=strtok(NULL,",");
strcpy(property[i].Title,p);
p=strtok(NULL,",");
strcpy(property[i].Dept,p);
i++;}
number=i;
fclose(fp);
scanf(" %[^\n]s",query);
  for (i = 0;query[i] != '\0';i++)
    {
        if (query[i] == ' ')
            count++;
    }
    if(count==1)
    {
        p=strtok(query,"\n");
        i=0;
        while(i<number)
        {
         if((strcmp(property[i].EmpId,p)==0)||(strcmp(property[i].FirstName,p)==0)||(strcmp(property[i].LastName,p)==0)||(strcmp(property[i].Date,p)==0)||(strcmp(property[i].City,p)==0)||(strcmp(property[i].Title,p)==0)||(strcmp(property[i].Dept,p)==0))
        {
            printf("%s,",property[i].EmpId);
            printf("%s,",property[i].FirstName);
            printf("%s,",property[i].LastName);
            printf("%s,",property[i].Date);
            printf("%s,",property[i].City);
            printf("%s,",property[i].Title);
            printf("%s\n",property[i].Dept);
        }
        i++;
        }
    }
else if(count==4)
{
p=strtok(query," ");
p=strtok(NULL," ");
if(strcmp(p,"*")==0)
{
    alldisplay();
}
else if(strcmp(p,"EmpId")==0)
{
    EmpId();
    //OneColumnDisplay(p);
}
else if(strcmp(p,"FirstName")==0)
{
    FirstName();
    //OneColumnDisplay(p);
}
else if(strcmp(p,"LastName")==0)
{
    LastName();
    //OneColumnDisplay(p);
}
else if(strcmp(p,"Date")==0)
{
    Date();
    //OneColumnDisplay(p);
}
else if(strcmp(p,"City")==0)
{
    City();
    //OneColumnDisplay(p);
}
else if(strcmp(p,"Title")==0)
{
    Title();
    //OneColumnDisplay(p);
}
else if(strcmp(p,"Dept")==0)
{
    Dept();
    //OneColumnDisplay(p);
}
}
else if(count>4)
{
    p=strtok(query," ");
    while(p!=NULL)
    {
        if(strcmp(p,"EmpId")==0||strcmp(p,"FirstName")==0||strcmp(p,"LastName")==0||strcmp(p,"Date")==0||strcmp(p,"City")==0||strcmp(p,"Title")==0||strcmp(p,"Dept")==0)
        {
  if(strcmp(p,"EmpId")==0)
{
    EmpId();
    //OneColumnDisplay(p);
}
else if(strcmp(p,"FirstName")==0)
{
    FirstName();
    //OneColumnDisplay(p);
}
else if(strcmp(p,"LastName")==0)
{
    LastName();
    //OneColumnDisplay(p);
}
else if(strcmp(p,"Date")==0)
{
    Date();
    //OneColumnDisplay(p);
}
else if(strcmp(p,"City")==0)
{
    City();
    //OneColumnDisplay(p);
}
else if(strcmp(p,"Title")==0)
{
    Title();
    //OneColumnDisplay(p);
}
else if(strcmp(p,"Dept")==0)
{
    Dept();
    //OneColumnDisplay(p);
}
        }

    p=strtok(NULL," ");
}
}
return 0;

}
void alldisplay()
{
int i;
for(i=0;i<number;i++){
printf("%s,",property[i].EmpId);
printf("%s,",property[i].FirstName);
printf("%s,",property[i].LastName);
printf("%s,",property[i].Date);
printf("%s,",property[i].City);
printf("%s,",property[i].Title);
printf("%s\n",property[i].Dept);
}
}
void EmpId()
{
    int i;
    printf("Emp Id\n-----\n");
    for(i=0;i<number;i++)
    {
        printf("%s\n",property[i].EmpId);
    }
}
void FirstName()
{
    int i;
    printf("FirstName\n-----\n");
    for(i=0;i<number;i++)
    {
        printf("%s\n",property[i].FirstName);
    }
}
void LastName()
{
    int i;
    printf("LastName\n-----\n");
    for(i=0;i<number;i++)
    {
        printf("%s\n",property[i].LastName);
    }
}
void Date()
{
    int i;
    printf("Date\n-----\n");
    for(i=0;i<number;i++)
    {
        printf("%s\n",property[i].Date);
    }
}
void City()
{
    int i;
    printf("City\n-----\n");
    for(i=0;i<number;i++)
    {
        printf("%s\n",property[i].City);
    }
}
void Title()
{
    int i;
    printf("Title\n-----\n");
    for(i=0;i<number;i++)
    {
        printf("%s\n",property[i].Title);
    }
}
void Dept()
{
    int i;
    printf("Dept\n----\n");
    for(i=0;i<number;i++)
    {
        printf("%s\n",property[i].Dept);
    }
}
/*void insert(char query[50])
{
    printf("function accessed");
    FILE *fp;
    char *p;
    fp=fopen("employee.txt","w");
    fprintf(fp,"%s",query);
    fclose(fp);
}*/



