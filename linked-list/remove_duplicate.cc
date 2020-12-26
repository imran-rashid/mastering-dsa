// remove duplicates from sorted linked list

#include <bits/stdc++.h>
using namespace std;

// node structure
struct Node{
    int data;
    struct Node *next; // pointer to next node
}*head = NULL; // global reference of the Node structure

void create(int n){
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
	while (p){
		cout << p -> data << " ";
		p = p -> next;
	}
}

// time is O(n)
void remove_duplicates(struct Node *p){
	struct Node *q = head -> next;

	while(q){
		if (p -> data != q -> data){
            p = q;
			q = q -> next;
		} else {
			p -> next = q -> next;
			delete q;
			q = p -> next;
		}
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
    cout << "after remove duplicate values list becomes";
    remove_duplicates(head);
    display(head);
    cout << endl;
}