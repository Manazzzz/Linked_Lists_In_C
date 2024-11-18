void del_first()
{
    if(start==NULL)
    {
        printf("Nothing to delete\n");
    }
    else
    {
        struct node* temp = start;
        start=temp->next;
        free(temp);
    }
}
