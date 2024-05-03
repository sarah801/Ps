
SinglyLinkedListNode* reverse(SinglyLinkedListNode* llist)
{
SinglyLinkedListNode* current = llist ; 
SinglyLinkedListNode* prev =NULL ;
SinglyLinkedListNode* next ; 
while(current != NULL) 
{
    next = current->next ; 
    current->next =prev ; 
    prev = current ; 
    current = next ; 
} 
llist = prev ; 
return llist ; 
}