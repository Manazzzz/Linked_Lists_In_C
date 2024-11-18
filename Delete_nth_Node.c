void del_pos()
{
    int pos;
    printf("Enter position to be deleted : ");
    scanf("%d",&pos);
    if(start==NULL)
    {
        printf("Empty list\n");
        return;
    }
    else if(pos==1)
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
        for(int i=1;i<pos;i++)
        {
            if(temp==NULL)
            {
                printf("Position out of bound\n");
                return;
            }
            prev=temp;
            temp=temp->next;
        }
        prev->next=temp->next;
        free(temp);
    }
}
