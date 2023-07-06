void deleteAlt(struct Node *head){
    if(head==NULL || head->next==NULL)return;
    Node*curr=head;
    while(curr && curr->next){
        Node*temp=curr->next;
        curr->next=temp->next;
        curr=curr->next;
        delete temp;
    }
}
