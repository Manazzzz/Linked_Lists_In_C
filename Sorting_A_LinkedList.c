void sorting()
{
    struct node* temp1=start;
    struct node* temp2=NULL;
    int x;
    
    while(temp1->next!=NULL)
    {
        temp2=temp1->next;
        while(temp2!=NULL)
        {
            if(temp1->info>temp2->info)
            {
                x=temp1->info;
                temp1->info=temp2->info;
                temp2->info=x;
            }
            temp2=temp2->next;
        }
        temp1=temp1->next;
    }
    
}
