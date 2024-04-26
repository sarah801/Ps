void printLinkedList(SinglyLinkedListNode* head) {

SinglyLinkedListNode* temp  = head ; 
while (temp !=NULL)
{
    
    cout<< temp->data<<"\n"; 
    temp = temp->next ; 
    
    
}

}
