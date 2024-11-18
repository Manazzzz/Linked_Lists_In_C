#include<stdio.h>
#include<stdlib.h>

struct node
{
    int info;
    struct node* next;
};

struct node* start;

struct node* getNode(int n)
{
    struct node* p;
    p=(struct node*)malloc(sizeof(struct node));
    if(p==NULL)
    {
        printf("Memory not allocated");
        return p;
    }
    p->info=n;
    p->next=NULL;
    return p;
}

void print()
{
    struct node* temp=start;
    while(temp!=NULL)
    {
        printf("%d -> ",temp->info);
        temp=temp->next;
    }
    printf("NULL\n");
}

void insert_end()
{
    struct node* new_node;
    int n;
    printf("Value to be inserted : ");
    scanf("%d",&n);
    new_node=getNode(n);
    
    if(new_node==NULL)
    {
        return;
    }
    else if(start==NULL)
    {
        start=new_node;
    }
    else if(start->next==NULL)
    {
        start->next=new_node;
    }
    else
    {
        struct node* temp = start;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=new_node;
    }
}

void main()
{
    int choice;
    do
    {
        printf("Enter \n1.Insert End\n2.Print\n3.Exit\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: insert_end();
                    break;
            case 2: print();
                    break;
            case 3: printf("Exiting....");
                    break;
            default: printf("Enter a valid choice");
                     break;
        }
    }while(choice!=3);
}
