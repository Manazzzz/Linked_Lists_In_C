void mid()
{
    if(start==NULL||start->next==NULL)
    {
        printf("Not possible to find middle\n");
        return;
    }
    else
    {
        struct node* slow = start;
        struct node* fast = start;
        while(fast!=NULL && fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        printf("Middle node : %d\n",slow->info);
    }
}
