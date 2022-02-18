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
void insertAtBegining(Node** head, int key);
void insertAtEnd(Node** head, int key);
void getPositionAtKey(Node* head, int key);

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
    insertAtBegining(&head,11); 
    insertAtBegining(&head,10);
    insertAtBegining(&head,9);
    insertAtEnd(&head,16);
    insertAtEnd(&head,17);
    insertAtEnd(&head,18);
    
    displayLinkedList(head);
    getPositionAtKey(head,14);
    getPositionAtKey(head,11);
    return 0;
}

// Function definations 

void displayLinkedList(Node* head)
{
    Node* ptr = head;
    
    cout<<"\nKeys in the liknked list....\n";
    while(ptr!=NULL)
    {
        cout<<ptr->key<<" ";
        ptr = ptr->next;
    }
}

void insertAtBegining(Node** head, int key)
{
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->key = key;
    
    newNode->next = *head;
    *head = newNode;
}

void insertAtEnd(Node** head, int key) {

Node* newNode = (Node*)malloc(sizeof(Node));
Node* lastNode = *head;

newNode->key = key;
newNode->next = NULL;

    if(*head == NULL)
    {
        // Basically list is empty
        *head = newNode;
        return ;
    }

    while(lastNode->next != NULL)
    {
        lastNode = lastNode->next;
    }
    
    lastNode->next = newNode;
}

void getPositionAtKey(Node* head, int key)
{
    Node* ptr = head;
    // indexing
    int i = 0;
    
    while(ptr!=NULL)
    {
        ptr = ptr->next;
        i++;
        if(ptr->key == key)
        {
            cout<<"\n****[FOUND] "<<key<<" at position at "<<i+1<<"****";
            return;
        }
    }
    
}
