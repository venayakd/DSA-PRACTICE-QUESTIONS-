int getMiddle(Node *head)
{
  if(head==NULL) return NULL;
  int count=0;
  Node *p =head;
  while(p!=NULL)
  {
      count++;
      p=p->next;
  }
  Node *curr=head;
  for(int i=0;i<count/2;i++)
  {
      curr=curr->next;
  }
  return curr->data;
}
