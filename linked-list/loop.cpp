// Given a linked list, check if the linked list has loop or not
// https://www.geeksforgeeks.org/detect-loop-in-a-linked-list/ (method 3)

#include <iostream>
using namespace std;

struct Node {
	int data;
	struct Node *next;
}*head = NULL;

void appendNode(int value){
	struct Node *last;

	struct Node *newNode = new Node;
	newNode -> data = value;
	newNode -> next = NULL;

	if (head == NULL){
		head = last = newNode;
	} else {
		last -> next = newNode;
		last = newNode;
	}
}

// time is O(n) and space is O(1)
bool is_loop(){
	struct Node *p = head;
	struct Node *q = head;

	do {
		p = p -> next;
		// we took 2 steps of q Node cause at any stage both pointing same node that's mean its loop
		q = q -> next;
		// have to check q isn't pointing to null
		q = q != 0 ? q -> next : q;
	} while (p and q and p != q);

	// when p points to q
	return p == q ? true : false;
}

int main(){
	appendNode(5);
	appendNode(15);
	appendNode(25);
	appendNode(35);
	appendNode(45);

	// for making loop
	struct Node *t1, *t2;
	t1 = head -> next -> next;
	t2 = t1 -> next -> next;
	t2 -> next = t1;

	bool result = is_loop();
	if (result) 
		cout << "Loop is found\n";
	else
		cout << "Loop isn't found\n";
}