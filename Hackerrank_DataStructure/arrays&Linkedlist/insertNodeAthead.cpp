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
  SinglyLinkedListNode* insertNodeAthead (SinglyLinkedListNode* head , int data)
 { //intialize the new node with data 
     SinglyLinkedListNode* new_Node =  new SinglyLinkedListNode(data) ; 
     // make the new node to be the new head 
      new_Node->next = head ; 
     
  
     return new_Node ; 
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
           new_Node = insertNodeAthead(new_Node,input);
    }
   
    
     cin.clear(); 
   printList(new_Node) ; 
 
    return 0;
}
