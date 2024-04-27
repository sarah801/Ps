#include <bits/stdc++.h>

using namespace std;


class SinglyLinkedListNode {
    public:
        int data;
        SinglyLinkedListNode *next;
SinglyLinkedListNode() {
            this->data = 0;
            this->next = nullptr;
        }
        SinglyLinkedListNode(int node_data) {
            this->data = node_data;
            this->next = nullptr;
        }
};


    SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* llist, int position) {
        if (llist == nullptr)  // if the list is empty 
        {
            cout << "list is already empty "; 
        }
        else if (position ==0 )// remove the head 
        {
            SinglyLinkedListNode* temp = llist ; 
            llist = llist->next ;
            delete temp ; 
            
        }
        else 
    {
        SinglyLinkedListNode* current =  llist ;  
      
        for (int i = 0 ; i < position -1  && current->next != nullptr ; i++ )
        {
            current = current->next ; 
            
        }
        if(current == nullptr || current->next == nullptr)
        {
            cout << " position is invalid " ; 
        }
        else 
        {
        SinglyLinkedListNode* temp =  current->next ;  
    
        current->next  = current->next->next ; 
        delete temp; 
        }
        
    }
    return llist; 
    }
