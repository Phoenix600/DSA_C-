#include<iostream>
#include<malloc.h>
// Basic operations on Linked List
using std::cout;
using std::cin;

class Node
{
    public:
    int key;
    Node* next;
};

void displayLinkedList(Node* head);

int main()
{
    // Declaring the instance of the Node
    Node* head;
    Node* first = NULL;
    Node* second = NULL;
    Node* third = NULL;
    Node* fourth = NULL;
    
    
    
    // Allocating memory to the Node;
    first = (Node*)malloc(sizeof(Node));
    second = (Node*)malloc(sizeof(Node));
    third = (Node*)malloc(sizeof(Node));
    fourth = (Node*)malloc(sizeof(Node));

    // Head pointer points to the first node
    head = first;

    // Setting key in the Nodes
    first->key = 12;
    first->next = second;
    
    second->key = 13;
    second->next = third;
    
    third->key = 14;
    third->next = fourth;
    
    fourth->key = 15;
    fourth->next = NULL;
    

    
    displayLinkedList(head);
    
    return 0;
}

// Function definations 

void displayLinkedList(Node* head)
{
    Node* ptr = head;
    
    cout<<"Keys in the liknked list....\n";
    while(ptr!=NULL)
    {
        cout<<ptr->key<<" ";
        ptr = ptr->next;
    }
}
