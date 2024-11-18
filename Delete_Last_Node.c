void del_last()
{
    if(start==NULL)
    {
        printf("Nothing to delete\n");
    }
    else if(start->next==NULL)
    {
        struct node* temp = start;
        start=temp->next;
        free(temp);
        return;
    }
    else
    {
        struct node* temp = start;
        struct node* prev = NULL;
        while(temp->next!=NULL)
        {
            prev=temp;
            temp=temp->next;
        }
        prev->next=NULL;
        free(temp);
    }
}
