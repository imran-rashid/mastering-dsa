// reverse a linked list using reverse node

#include <iostream>
using namespace std;

struct Node{
    int data;
    struct Node *next;
}*head = NULL;

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

void display(struct Node *p){
    while (p != NULL){
        cout << p -> data << " ";
        p = p -> next;
    }
    cout << endl;
}

// time is O(n) and space is O(1)
void reverse_list(struct Node *p){
    struct Node *q = NULL; // keep tracking p node
    struct Node *r = NULL; // keep tracking q node so that we can modify q node also not lose previous / next link

    while (p){
        r = q;
        q = p;
        p = p -> next;
        q -> next = r; // q will point previous node for reversing
    }
    head = q; // q node will be headPointer
}

// recursively
void reverseList(struct Node *q, struct Node *p){
    if (p != NULL){
        reverseList(p, p -> next);
        p -> next = q; // p will point previous node for reversing
    } else {
        head = q; // pointer q will be p and p will NULL
    }
}

int main(){
    int n;
    cout << "Number of elements ";
    cin >> n;
    
    create(n);
    cout << "Elements are ";
    display(head);
    cout << "After reversing linked list is ";
    reverse_list(head);
    // reverseList(NULL, head);
    display(head);
}