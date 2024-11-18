#include<stdio.h>
#include<stdlib.h>

struct node
{
	int info;
	struct node* next;
};

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

struct node* concatenate(struct node* l1, struct node* l2)
{
    if(!l1)
    {
        return l2;
    }
    else if(!l2)
    {
        return l1;
    }
    else
    {
        struct node* temp = l1;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=l2;
        return l1;
    }
}

void print(struct node* start)
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
    struct node* l1 = getNode(1);
    l1->next=getNode(3);
    l1->next->next=getNode(5);
    
    struct node* l2 = getNode(2);
    l2->next=getNode(4);
    l2->next->next=getNode(6);
    
    struct node* c = concatenate(l1,l2);
    printf("List is : \n");
    print(c);
}
