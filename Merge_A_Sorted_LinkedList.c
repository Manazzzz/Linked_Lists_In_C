#include<stdio.h>
#include<stdlib.h>

struct node
{
	int info;
	struct node* next;
};

//struct node* start;

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

struct node* merge(struct node* l1, struct node* l2)
{
    if(!l1)
    {
        return l2;
    }
    else if(!l2)
    {
        return l1;
    }
    
    struct node* head;
    struct node* tail;
    
    if(l1->info<l2->info)
    {
        head=l1;
        l1=l1->next;
    }
    else
    {
        head=l2;
        l2=l2->next;
    }
    tail=head;
    
    while(l1&&l2)
    {
        if(l1->info<l2->info)
        {
            tail->next=l1;
            l1=l1->next;
        }
        else
        {
            tail->next=l2;
            l2=l2->next;
        }
        tail=tail->next;
    }
    if(l1)
    {
        tail->next=l1;
    }
    else
    {
        tail->next=l2;
    }
    return head;
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
    
    struct node* m = merge(l1,l2);
    printf("List is : \n");
    print(m);
}
