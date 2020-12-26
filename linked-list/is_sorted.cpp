// check whether linked list is sorted or not

#include <iostream>
using namespace std;

struct Node {
    int data;
    struct Node *next;
}*head = NULL;

void create_list(int n){
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

void display(struct Node *p){
    while (p != NULL){
        cout << p -> data << " ";
        p = p -> next;
    }
}

// time is O(n) and space is O(1)
bool is_sorted(struct Node *p){
    int x = -5555;
    
    while (p){
        if (x > p -> data){
            return false;
        }
        x = p -> data;
        p  = p -> next;
    }
    return true;
}

// another way [extra node for track previous node's data]
bool is_sorted2(struct Node *p){
    struct Node *q = head;
    p = p -> next;
    
    while (p){
        if (q -> data > p -> data){
            return false;
        } 
        p = p -> next;
        q = q -> next;
    }
    return true;
}

int main(){
    int n;
    cout << "Enter the number of elements ";
    cin >> n;

    create_list(n);
    cout << "Elements are ";
    display(head);
    cout << endl;

    bool result = is_sorted(head);
    cout << "Is list sorted =>";
    if (result) cout << "Yes!" << endl;
    else cout << "Nope 😔" << endl;
}