struct Node* reverseList(struct Node *head)
    {
        // code here
        // return head of reversed list
        int count=0;
        for(Node *curr=head;curr!=NULL;curr=curr->next)
        {
           count++;
        }
        int arr[count];    
        int i=0;
        for(Node *curr=head;curr!=NULL && i<count ;curr=curr->next  )
        {
            arr[i]=curr->data;
            i++;
        }
        int j=count-1;
        for(Node *curr=head;curr!=NULL && j>=0;curr=curr->next)
        {
            curr->data=arr[j];
            j--;
        }
        return head;
    }
