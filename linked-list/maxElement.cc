// find the largest element in a linked list

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

// time is O(n) and space is O(1)
int max(struct Node *p){
    int maxElement = p -> data;

    while (p != 0){
        maxElement = max(maxElement, p -> data);
        p = p -> next;
    }
    return maxElement;
}

int main(){
    int n;
    cout << "Number of elements ";
    cin >> n;
    
    create_ll(n);
    cout << "Largest element is " << max(head) << endl;
}