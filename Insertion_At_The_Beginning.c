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

void insert_begin()
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
    else
    {
        new_node->next=start;
        start=new_node;
    }
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

void main()
{
    int choice;
    do
    {
        printf("Enter \n1.Insert Beginning\n2.Print\n3.Exit\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: insert_begin();
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