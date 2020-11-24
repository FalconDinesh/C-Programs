#include<stdio.h>
#include<stdlib.h>

void createnewNode(int n);
void insertnewNode(int num,int pos);
void displaylinkedlist();
void deletenewNode(int num,int pos);

    struct node
    {
        int data;
        struct node *next;
    }*head;

void main()
{
    int c,n;
    printf("\nLinked list operations:");
    printf("\n1.Create node.");
    printf("\n2.Insert node at middle.");
    printf("\n3.delete node.");
    printf("\n4.Display node.");
    printf("\n5.Exit.");
    while(c!=5)
    {
        printf("\nEnter the operation need to be done:");
        scanf("%d",&c);
        switch (c)
        {
            case 1 :
            {   printf("\nEnter the number of nodes:");
                scanf("%d",&n);
                createnewNode(n);
                displaylinkedlist();
            }
            case 2:
            {
                int num,pos;
                printf("\nEnter the data to be inserted:");
                scanf("%d",&num);
                printf("\nEnter the position:");
                scanf("%d",&pos);
                if(pos<=1 ||pos>=n)
                {
                    printf("Enter a valid position.");
                }
                else
                {
                    insertnewNode(num,pos);
                }
            }
            case 4:
            {
                displaylinkedlist();
            }
            case 3:
            {
                int num,pos;
                printf("\nEnter the data to be deleted:");
                scanf("%d",&num);
                printf("\nEnter the position:");
                scanf("%d",&pos);
                if(pos<=1 ||pos>=n)
                {
                    printf("\nEnter a valid position.");
                }
                else
                {
                    deletenewNode(num,pos);
                }
            }
        }
    }
}
void createnewNode(int n)
{
    struct node *newNode, *temp;
    int num,i;
    head = (struct node *)malloc(sizeof(struct node));

    printf("\nEnter the data of head node:");
    scanf("%d",&num);
    head->data = num;
    head->next = NULL;
    temp=head;   
    for ( i = 2; i <= n; i++)
    {
        newNode=(struct node *)malloc(sizeof(struct node));
        printf("\nEnter the data for node %d :",i);
        scanf("%d",&num);
        newNode->data=num;
        newNode->next=NULL;

        temp->next=newNode;
        temp=temp->next;
    }
}
void insertnewNode(int num,int pos)
{
    struct node *temp;
    struct node *newNode;
    newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = num;//links the data to list
    newNode->next=NULL;
    temp=head;
    //traversing
    for ( int i = 2; i <= pos-1; i++)
    {
        temp=temp->next;
        if(temp==NULL)
            break;
    }
    if(temp!=NULL)
    {
        newNode->next=temp->next;
        temp->next=newNode;
    }        
}
void displaylinkedlist()
{
    struct node *temp;
    if(head == NULL)
    {
        printf("\nList is empty.");
    }
    else
    {
        temp=head;
        while(temp!=NULL)
        {
            printf(" %d->",temp->data);
            temp=temp->next;
        }
    }   
}
void deletenewNode(int num,int pos)
{
    struct node *newNode,*temp;
    temp=head;
    for( int i = 2; i <= pos-1;i++)
    {
        temp=temp->next;
        if(temp==NULL)
        break;
    }
    if(temp!=NULL)
    {
        temp->next=temp->next->next;
        free(temp);
    }

}