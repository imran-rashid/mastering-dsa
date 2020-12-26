// find the length of the list

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
int length2(struct Node *p){
    int count = 0;

    while (p != 0){
        count += 1;
        p = p -> next;
    }
    return count;
}

// find length with the help of recursion
// time is O(n) and space is O(n)
int length(struct Node *p){
    // base case
    if (p == 0){
        return 0;
    }
    // recursive case
    return length(p->next) + 1;
} 

int main(){
    int n;
    cout << "Number of elements ";
    cin >> n;
    
    create_ll(n);
    cout << "Length of the list is " << length(head) << endl;
}