SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* head, int data, int position) {
    SinglyLinkedListNode* node=new SinglyLinkedListNode(data);
    if(position==0){ node->next=head; return node; }
    SinglyLinkedListNode* cur=head;
    for(int i=0;i<position-1;i++) cur=cur->next;
    node->next=cur->next;
    cur->next=node;
    return head;
}
