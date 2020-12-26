// merge 2 sorted linked list in place
// https://www.geeksforgeeks.org/merge-two-sorted-lists-place/
// https://www.geeksforgeeks.org/merge-two-sorted-linked-lists/

#include <iostream>
using namespace std;

// nodes
struct Node{
    int data;
    struct Node *next; // pointer to next node
}*head = NULL, *second = NULL; // it is globally

// 1st list
void create(int n){
    struct Node *temp, *last;
    int data;
    cout << "Enter the elements ";
    cin >> data;

    // head node
    head = new Node;
    head -> data = data;
    head -> next = NULL;
    last = head; // they're pointing same node
    
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

// 2nd node
void create2(int n){
    struct Node *temp, *last;
    int data;
    cout << "Enter the elements ";
    cin >> data;

    second = new Node;
    second -> data = data;
    second -> next = NULL;
    last = second; // they're pointing same node
    
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
    while (p){
        cout << p -> data << " ";
        p = p -> next;
    }
}

// time is θ(m+n) 
void mergeList(){
    struct Node *p = head;
    struct Node *q = second;
    struct Node *last = NULL;

    // 1st Node
    if(p -> data < q -> data){
        last = p;
        p = p -> next;
    } else {
        last = q;
        q = q -> next;
    }
    last -> next = NULL;

    // for rest of the nodes
    while (p and q){
        if(p -> data < q -> data){
            last -> next = p;
            last = p;
            p = p -> next;
            last -> next = NULL;
        } else {
            last -> next = q;
            last = q;
            q = q -> next;
            last -> next = NULL;
        }
    }

    // if stll left element in p or q
    if (p){
        last -> next = p;
    } else {
        last -> next = q;
    }
}

int main(){
    int n;
    cout << "number of elements in 1st list ";
    cin >> n;
    create(n);

    int n2;
    cout << "number of elements in 2nd list ";
    cin >> n2;
    create2(n2);

    mergeList();
    cout << "After merging list becomes ";
    display(head);
    cout << endl;
}