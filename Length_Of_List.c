void count()
{
    struct node* temp = start;
    int c=0;
    if(start==NULL)
    {
        printf("Empty\n");
        return;
    }
    else
    {
        while(temp!=NULL)
        {
            c++;
            temp=temp->next;
        }
        printf("Length of the list : %d\n",c);
    }
}
