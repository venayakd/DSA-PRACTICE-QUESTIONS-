    Node* segregate(Node *head)
    {   int nz=0,n1=0,n2=0;
        Node *p=head;
        while(p!=NULL)
        {
            if(p->data == 0)
            {
                nz++;
            }
            else if(p->data == 1)
            {
                n1++;
            }
            else
            {
                n2++;
            }
            p=p->next;
        }    
        Node *q=head;
        for(int i=0;i<nz && q!=NULL;i++)
        {
            q->data=0;
            q=q->next;
        }
        for(int j=0;j<n1 && q!=NULL;j++)
        {
            q->data=1;
            q=q->next;
        }
        for(int k=0; k<n2 && q!=NULL;k++)
        {
            q->data=2;
            q=q->next;
        }
        return head; 
        
            
    }
        
