#include<iostream>

class Node{
    public:
    int key;
    Node* next;
};

int main()
{
    Node* head;
    Node* first = NULL;
    Node* second = NULL;
    Node* third = NULL;
    Node* fourth = NULL;
    
    // allocating memory for the three nodes 
    first = new Node;
    second = new Node;
    third = new Node;
    fourth = new Node;
    
    // Setting data to the node
    first->key = 12;
    second->key = 13;
    third->key = 14;
    fourth->key = 15;
    
    // Connecting the nodes
    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = NULL;
    
    // printing the nodes 
    head = first;
    
     std::cout<<"Keys in the linked list....\n";
     
    while(head!=NULL)
    {
        std::cout<<head->key<<" ";
        head = head->next;
    }
    
    return 0;
}
