// concatenate(unsorted) 2 linked list

#include <iostream>
using namespace std;

// node structure
struct Node{
    int data;
    struct Node *next;
}*head = NULL, *second = NULL;

void create(int n){
    struct Node *temp, *last;
    
    int data;
    cout << "Enter the elements ";
    cin >> data;

    // head node
    head = new Node;
    head -> data = data;
    head -> next = NULL;
    last = head;
    
    // rest of the nodes
    for(int i = 1; i < n; i++){
        temp = new Node;
        cin >> data;
        temp -> data = data;
        temp -> next = NULL;
        last -> next = temp; // it is connecting temp to previous node
        last = temp; // last node will be temp
    }
}

void create2(int n){
    struct Node *temp, *last;
    // starting node
    second = new Node;
    int data;
    cout << "Enter the elements ";
    cin >> data;
    // first node
    second -> data = data;
    second -> next = NULL;
    last = second;
    
    // rest of the nodes
    for(int i = 1; i < n; i++){
        temp = new Node;
        cin >> data;
        temp -> data = data;
        temp -> next = NULL;
        last -> next = temp; // it is connecting temp to previous node
        last = temp; // last node will be temp
    }
}

void display(struct Node *p){
    while (p != NULL){
        cout << p -> data << " ";
        p = p -> next;
    }
    cout << endl;
}

void concatenate(struct Node *p, struct Node *q){
    while (p -> next != 0){
        p = p -> next;
    }
    p -> next = q; // p just pointing new list headNode
}

int main(){
    int n;
    cout << "Number of elements for 1st list ";
    cin >> n;
    create(n);
    
    int n2;
    cout << "Number of elements for 2nd list ";
    cin >> n2;
    create2(n2);
    
    concatenate(head, second);
    cout << "Linked lists are ";
    display(head);
}