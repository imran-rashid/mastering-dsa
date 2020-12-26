// delete node from linked list by value

#include <iostream>
using namespace std;

struct Node{
    int data;
    struct Node *next;
}*head = NULL;

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

void deleteNode(struct Node *p, int value){
    struct Node *q = NULL;

    if (head == NULL) cout << "No node in there\n";

    if (p -> data == value){
        head = head -> next;
        delete p;
    } else {
        while (p){
            if (p -> data == value){
                q -> next = p -> next;
                delete p;
                break;
            }
            q = p;
            p = p -> next;
        }
    }
}

void display(struct Node *p){
    while (p != NULL){
        cout << p -> data << " ";
        p = p -> next;
    }
}

int main(){
    int n;
    cout << "Number of elements ";
    cin >> n;
    
    create(n);
    cout << "Elements are ";
    display(head);
    cout << endl;
    
    int number;
    cout << "Number you wanna delete ";
    cin >> number;

    deleteNode(head, number);
    cout << "After delete ";
    display(head);
    cout << endl;
}