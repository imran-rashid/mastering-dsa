// delete node from linked list by position

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

int length(struct Node *p){
    if (p == 0){
        return 0;
    }
    return length(p->next) + 1;
} 

void deleteNode(struct Node *p, int pos){
    if (head == NULL) cout << "No node in there\n";

    if (pos < 0 or pos > length(head)){
        return;
    }

    if (pos == 1){
        head = head -> next;
        delete p;
    } else {
        struct Node *q = NULL;
        for(int i = 0; i < pos - 1; i++){
            q = p;
            p = p -> next;
        }
        q -> next = p -> next;
        delete p;
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
    
    int pos;
    cout << "Node position which you wanna delete ";
    cin >> pos;

    deleteNode(head, pos);
    cout << "After delete ";
    display(head);
    cout << endl;
}