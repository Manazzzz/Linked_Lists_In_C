void insert_pos()
{
    struct node* new_node;
    int n,pos;
    printf("Value to be inserted : ");
    scanf("%d",&n);
    printf("Position : ");
    scanf("%d",&pos);
    
    new_node=getNode(n);
    
    if(new_node==NULL)
    {
        return;
    }
    else if(start==NULL)
    {
        return;
    }
    else if(pos==0)
    {
        new_node->next=start;
        start=new_node;
    }
    else
    {
        
        struct node* temp = start;
        for(int i=0;i<(pos-1);i++)
        {
            if(temp==NULL)
            {
                printf("Position out of bounds\n");
                return;
            }
            temp=temp->next;
        }
        new_node->next=temp->next;
        temp->next=new_node;
    }
}
