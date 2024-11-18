void rev()
{
    if(start==NULL || start->next==NULL)
    {
        printf("Reversal Not possible\n");
        return;
    }
    else
    {
        struct node* curr = start;
        struct node* prev = NULL;
        struct node* forward = NULL;
        while(curr!=NULL)
        {
            forward=curr->next;
            curr->next=prev;
            prev=curr;
            curr=forward;
        }
        start=prev;
    }
    
}
