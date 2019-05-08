#include <stdio.h>
#include <stdlib.h>
void insert();
void delete();
void display();
struct node
{
    int value;
    struct node *next;
}*p,*start,*temp;
int main()
{
    int x;
    char c;
    do
    {
        printf("1.enter the elements\n2.delete the elements\n3.display the elements\n");
        scanf("%d",&x);
        switch(x)
        {
            case 1:insert();
                   break;
            case 2:delete();
                   break;
            case 3:display();
                   break;
            default:printf("not a valid operation");
        }
        printf("do you want to perform any other operations");
        scanf(" %c",&c);
    }while(c=='y');
    return 0;
}
void insert()
{
    int x;
    printf("enter the elements");
    scanf("%d",&x);
    if(start==NULL)
    {
        temp=(struct node*)malloc(sizeof(struct node));
        start=temp;
        p=start;
        temp->value=x;
        temp->next=NULL;
    }
    else
    {
        temp=(struct node*)malloc(sizeof(struct node));
        temp->value=x;
        temp->next=NULL;
        p->next=temp;
        p=p->next;
    }
}
void display()
{
    printf("elements are\n");
    p=start;
    while(p!=NULL){
        printf("%d\n",p->value);
        p=p->next;
    }
}
void delete()
{
    int i=1,pos;
    printf("enter the position");
    scanf("%d",&pos);
    p=start;
    while(i!=pos-1)
    {
        i++;
        p=p->next;
    }
    temp=p->next;
    p->next=p->next->next;
    temp->next=NULL;
    free(temp);
    printf("element deleted\n");
}
