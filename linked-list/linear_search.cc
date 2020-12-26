// Linear search on linked list
// binary search is not suitable for linked list hence it's not possible to go middle element in O(1) time

#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node *next;
}*head = NULL;

void create(int n){
    struct Node *temp, *last;
    head = new Node;
    cout << "Enter the elements ";
    cin >> head -> data;
    head -> next = NULL;
    last = head;

    for(int i = 1; i < n; i++){
        temp = new Node;
        cin >> temp -> data;
        temp -> next = NULL;
        last -> next = temp;
        last = temp;
    }
}

void display(struct Node *p){
    while (p != NULL){
        cout << p -> data << " ";
        p = p -> next;
    }
}

// time is O(n) and space is O(1)
Node* search(struct Node *p, int key){
    while (p){
        if (key == p -> data){
            return p;
        }
        p = p -> next;
    }
    return NULL;
}

int main(){
    int n;
    cout << "Enter the number of elements ";
    cin >> n;

    create(n);
    cout << "Elements are ";
    display(head);
    cout << endl;
    int key;
    cout << "Enter the element you want to search ";
    cin >> key;
    struct Node *x = search(head, key);
    if (x){
        cout << "Element "<< x -> data << "found " << endl;
    } else {
        cout << "not found\n";
    }
}