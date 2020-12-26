// Create and Traverse linked list

#include <bits/stdc++.h>
using namespace std;

// node structure
struct Node{
    int data;
    struct Node *next; // pointer to next node
}*head = NULL; // global reference of the Node structure

void create_ll(int n){
    struct Node *temp, *last;
    head = new Node;
    int data;
    cout << "Enter the elements ";
    cin >> data;

    // head node
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

// time is O(n) and space is O(1)
void display(struct Node *p){
    while (p != NULL){
        cout << p -> data << " ";
        p = p -> next;
    }
    cout << endl;
}

// value interchanging in decending order not interchanging node itself. 
// time is O(n) and space is O(n)
void reverse_print(struct Node *p){
    if (p != NULL){
        reverse_print(p -> next); // recursive call
        cout << p -> data << " ";
    }
}

int main(){
    int n;
    cout << "Number of elements ";
    cin >> n;
    
    create_ll(n);
    cout << "Elements are ";
    display(head);
    cout << "Reverse elements are ";
    reverse_print(head);
    cout << endl;
}