// find the sum of all elements

#include <bits/stdc++.h>
using namespace std;

// node structure
struct Node{
    int data;
    struct Node *next;
}*head = NULL;

void create_ll(int n){
    struct Node *temp, *last;
    head = new Node;
    int data;
    cout << "Enter the elements ";
    cin >> data;

    // head node
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

// time is O(1) & space is O(1)
int sum(struct Node *p){
    int su = 0;
    while (p != 0){
        su += p->data;
        p = p -> next;
    }
    return su;
}

// recursive version
// time & space is O(n)
int sum2(struct Node *p){
    if (p != 0){
        return sum(p -> next) + p->data;
    }
    return 0;
}

int main(){
    int n;
    cout << "Number of elements ";
    cin >> n;
    
    create_ll(n);
    cout << "Sum is " << sum(head) << endl;
}