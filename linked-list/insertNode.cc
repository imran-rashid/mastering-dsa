// insert a Node in an existing Linked list

#include <iostream>
using namespace std;

struct Node{
    int data;
    struct Node *next;
}*head = 0;

void create(int n){
    struct Node *temp, *last;
    head = new Node;
    cout << "Enter elements ";
    cin >> head -> data;
    head -> next = NULL;
    last = head;

    for(int i = 1; i< n; i++){
        temp = new Node;
        cin >> temp -> data;
        temp -> next = NULL;
        last -> next = temp;
        last = temp;
    }
}

void display(struct Node *p){
    while (p){
        cout << p -> data << " ";
        p = p -> next;
    }
}

int length(struct Node *p){
    int count = 0;
    while (p != 0){
        count += 1;
        p = p -> next;
    }
    return count;
}

// time is O(n) and space is O(1)
void insert(int position, int value){
    struct Node *newNode = new Node;
    newNode -> data = value;
    struct Node *p = head; // point to 0th node

    // when it is out of range
    if (position < 0 or (position > length(head))){
        return;
    }

    // insert Node at the beginning
    if (position == 0){ // head Node pos is 1
        newNode -> next = head;
        head = newNode;
    } 
    // insert anywhere
    else if (position > 0){
        for(int i = 0; i < position - 1; i++){ // iterating 0 to pos-1
            p = p -> next;
        }
        newNode -> next = p -> next;
        p -> next = newNode;
    }
}

int main(){
    int n;
    cout << "Enter number of elements ";
    cin >> n;

    create(n);
    cout << "The elements are ";
    display(head);
    cout << endl;

    int pos, value;
    cout << "Enter Position and value ";
    cin >> pos >> value;

    cout << "After insert value new lists are ";
    insert(pos, value);
    display(head);
    cout << endl;

    return 0;
}