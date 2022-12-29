#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int d;
    struct node *link;
};
struct node *top=NULL,*temp;
void push(int d)
{
    struct node *new=(struct node *)malloc(sizeof(struct node));
    new->d=d;
    printf("\n %d inserted...",new->d);
    new->link=top;
    top=new; 
}
void pop()
{
    if(top==NULL)
    {
        printf("\nStack is empty");
    }
    else
    {
       temp=top;
       top=temp->link;
       printf("\n %d is deleted ",temp->d);
       free(temp); 
    }
}
void display()
{
    if(top==NULL)
    {
        printf("\nStack is empty");
    }
    else
    {
        temp=top;
        printf("\nElements are :");
        while(temp!=NULL)
        {
            printf("\n %d",temp->d);
            temp=temp->link;
        }
    }
}
void peek()
{
    if(top==NULL)
    {
        printf("\nStack is empty");
    }
    else
    {
        printf("\nTop element is :%d",top->d);
    }
}
int main()
{
    int c,data;
    while(1)
    {
        printf("\n1.Push\n2.Pop\n3.Display\n4.Peek\n5.Exit\nEnter choice :");
        scanf("%d",&c);
        switch(c)
        {
            case 1:
            printf("\nEnter data :");
            scanf("%d",&data);
            push(data);
            break;
            case 2:
            pop();
            break;
            case 3:
            display();
            break;
            case 4 :
            peek();
            break;
            case 5:
            exit(0);
            break;
            default:
            printf("\nInvalid option");
        }
    }
}