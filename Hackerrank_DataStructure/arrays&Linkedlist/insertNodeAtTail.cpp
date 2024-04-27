#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class SinglyLinkedListNode {
    public:
   int data;
    SinglyLinkedListNode* next;
     
      SinglyLinkedListNode() // constructor 
       {
      
          next = nullptr; 
      }
      SinglyLinkedListNode(int dataVal) // constructor 
       {
          data =  dataVal ; 
          next = nullptr; 
      }
 };
  SinglyLinkedListNode* insertNodeAtTail (SinglyLinkedListNode* head , int data)
 { 
     SinglyLinkedListNode* new_Node =  new SinglyLinkedListNode(data) ; 
     
     if (head == nullptr)
     {
         return new_Node ; 
     }
     SinglyLinkedListNode* last  = head ; 
     while (last->next !=nullptr) 
     {
        last=last->next ; 
     }
    last->next  = new_Node  ; 
    
    return head ; 
     
 }
void printList (SinglyLinkedListNode* head)
{
    while(head  != NULL )
    {
        cout << head ->data <<"\n" ; 
        head = head->next ; 
    }
}
 
int main() {
    SinglyLinkedListNode* new_Node = nullptr;   
    int count ; 
    int  input ; 
    
   
  cin>>count ;  
    
    for (int i = 0 ; i < count ; i ++ )
    {
        cin>>input ; 
           new_Node = insertNodeAtTail(new_Node,input);
    }
   
    
     cin.clear(); 
   printList(new_Node) ; 
 
    return 0;
}
 
