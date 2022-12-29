#include<stdio.h>
#include<stdlib.h>
struct node{
    int d;
    struct node * link;
};
struct node * head,*new,*temp;
void insert_beg(int d)
{
    new=(struct node *)malloc(sizeof(struct node));
    new->d=d;
    if(head == NULL)
    {
        head=new;
        new->link=NULL;
    }
    else
    {
        new->link=head;
        head=new;
    }
    printf("%d is inserted...",d);
}
void insert_end(int d)
{
    new=(struct node *)malloc(sizeof(struct node));
    new->d=d;
    new->link=NULL;
    if(head==NULL)
    {
        head=new;
    }
    else
    {
        temp=head;
        while(temp->link != NULL)
        {
            temp=temp->link;
        }
        temp->link=new;
    }
    printf("%d is inserted...",d);
}
void insert_pos(int d,int p)
{
    new=(struct node *)malloc(sizeof(struct node ));
    new->d=d;
    temp=head;
    for(int i=1;i<p;i++)
    {
        temp=temp->link;
    }
    new->link=temp->link;
    temp->link=new;
    printf("%d is inserted...",d);
}
void traversal()
{
    if(head==NULL){
        printf("\nEmpty...!");
    }
    else
    {
    printf("\n");
   temp = head;
   while(temp != NULL)
   {
    printf("%d",temp->d);
    temp=temp->link;
    if(temp!=NULL)
    printf("->");
   } 
    }
}
int length (){
    int i=0;
    if(head==NULL){
        printf("\nEmpty...!");
    return 0;
    }
    else
    {
    temp=head;
    while(temp!=0)
    {
        temp=temp->link;
        i++;
    }
    return i;
    }
}
void deletion_beg()
{
    if(head==NULL){
        printf("\nEmpty...!");
    }
    else
    {
        temp=head;
        head=temp->link;
        printf("\n %d is deleted...",temp->d);
        free(temp);
    }
}
void deletion_end()
{
    if(head==NULL){
        printf("\nEmpty...!");
    }
    else
    {
        struct node *prv;
        temp=head;
        while(temp->link!=NULL)
        {
            prv=temp;
            temp=temp->link;
        }
        printf("\n %d is deleted...",temp->d);
        prv->link=NULL;
        temp->d=0;
        free(temp);
    }
}
void deletion_spec(int pos)
{
    struct node *next;
    temp=head;
    for(int i=1;i<=pos-1;i++)
    {
        temp=temp->link;
    }
    new=temp->link;
    temp->link=new->link;
    printf("\n %d is deleted...",new->d);
    free(new);
}
int main()
{
    int n,c,pos,count;
    printf("\nEnter number of elements :");
    scanf("%d",&n);
    int data;
    for(int i=1;i<=n;i++)
    {
        printf("\nEnter data %d :",i);
        scanf("%d",&data);
        insert_beg(data);
    }
    while(1)
    {
        printf("\n--------------------MENU----------------------");
        printf("\n1.Insert at beginning \n2.Insert at end \n3.Insert after a position \n4.Display \n5.Length \n6.Exit");
        printf("\n7.Deletion at begging \n8.Deletion at end \n9.Deletion specified position");
        printf("\nEnter choice :");
        scanf("%d",&c);
        switch(c)
        {
            case 1:
            printf("\nEnter data to insert at beginning:");
            scanf("%d",&data);
            insert_beg(data);
            break;
            case 2:
            printf("\nEnter data to insert at end:");
            scanf("%d",&data);
            insert_end(data);
            break;
            case 3:
            printf("\nEnter position :");
            scanf("%d",&pos);
            count=length();
            if(pos>count)
            {
                printf("\nInvalid");
            }
            else
            {
                printf("\nEnter data :");
                scanf("%d",&data);
                insert_pos(data,pos);
            }
            break;
            case 4:
            printf("\nElements are :");
            traversal();
            break;
            case 5:
            printf("\nNo of elements = %d",length());
            break;
            case 6:
            exit(0);
            case 7:
            deletion_beg();
            break;
            case 8:
            deletion_end();
            break;
            case 9:
            printf("\nEnter position :");
            scanf("%d",&pos);
            count=length();
            if(pos>count)
            {
                printf("\nInvalid");
            }
            else
            {
                deletion_spec(pos);
            }
            break;
            default:
            printf("\nInvalid option...")
        }
    }
    return 0;
 }
