void reversePrint(SinglyLinkedListNode* llist)
 {
     SinglyLinkedListNode* current = llist; 
    if (current == nullptr)//base case 
    {
        return ; 
    }
     
   
         
          reversePrint(current->next );
     
    cout << current->data <<endl ;
   
 


}