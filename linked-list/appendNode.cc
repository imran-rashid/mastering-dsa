// append node in a linked list

#include <iostream>
using namespace std;

struct Node{
    int data;
    struct Node *next;
}*head = NULL;

void display(struct Node *p){
    while (p){
        cout << p -> data << " ";
        p = p -> next;
    }
}

// time is O(1) and space is O(1)
void appendNode(int value){
    struct Node *last;

    // create new Node
    struct Node *newNode = new Node;
    newNode -> data = value;
    newNode -> next = NULL;

    // check head is null
    if (head == 0){
        head = last = newNode;
    } 
    // if not then
    else {
        last -> next = newNode;
        last = newNode;
    }
}

int main(){
    appendNode(5);
    appendNode(10);
    appendNode(15);
    appendNode(20);
    appendNode(25);

    display(head);
    cout << endl;
}