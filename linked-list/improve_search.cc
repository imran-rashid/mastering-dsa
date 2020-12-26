/**
* it's possible to improve linear search using 2 methods
    * transposition (swap previous element with current element)
    * move to head (move found element node at the head)
* https://www.geeksforgeeks.org/improving-linear-search-technique/
*/

#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node *next;
}*head = NULL;

void create(int array[], int n){
    struct Node *temp, *last;
    head = new Node;
    head -> data = array[0];
    head -> next = NULL;
    last = head;

    for(int i = 1; i < n; i++){
        temp = new Node;
        temp -> data = array[i];
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

// this will only work in fixed list so next time search same value it will take O(1) time...
Node* search(struct Node *p, int key){
    struct Node *q = NULL; // keep track previous node

    while (p){
        if (key == p -> data){
            q -> next = p -> next; // q points to p+1 node
            p -> next = head; // p points to head node
            head = p; // head becomes p
            return p;
        }
        q = p; // q becomes previous node of p
        p = p -> next;
    }
    return NULL;
}

int main(){
    int array[] = {4,5,8,9,7};
    int n = 5;

    create(array, n);
    cout << "Elements are ";
    display(head);
    cout << endl;
    
    struct Node *x = search(head, 9);
    x = search(head, 5);
    if (x){
    cout << "Element "<< x -> data << " found" << endl;
    } else {
        cout << "not found\n";
    }
    cout << "Elements after search ";
    display(head);
    cout << endl;
}