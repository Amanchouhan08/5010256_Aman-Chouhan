DoublyLinkedListNode* reverse(DoublyLinkedListNode* head) {
    DoublyLinkedListNode* cur=head,*temp=nullptr;
    while(cur){
        temp=cur->prev;
        cur->prev=cur->next;
        cur->next=temp;
        head=cur;
        cur=cur->prev;
    }
    return head;
}
