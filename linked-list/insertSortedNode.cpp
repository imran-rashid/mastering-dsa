// insert node in a sorted list at sorted position

#include <iostream>

struct Node{
    int data;
    struct Node *next;
}*head = NULL;

void create(int n){
    struct Node *temp, *last;
    head = new Node;
    std::cout << "Enter elements ";
    std::cin >> head -> data;
    head -> next = NULL;
    last = head;

    for(int i = 1; i< n; i++){
        temp = new Node;
        std::cin >> temp -> data;
        temp -> next = NULL;
        last -> next = temp;
        last = temp;
    }
}

// time is O(n) and space is O(1)
void add_ele_in_sorted_ll(int value){
    struct Node *p = head, *q = NULL;
    struct Node *newNode = new Node;
    newNode -> data = value;
    newNode -> next = NULL;
    
    // if there is no node then set new node
    if (head == NULL){ 
        head = newNode;
    } 
    // insert Node at the beginning
    else if (value < p -> data){ 
        newNode -> next = head;
        head = newNode;
    }
    // insert anywhere
    else {
        while (p){
            if (p -> data < value){
                q = p;
                p = p -> next;
                break;
            } 
        }
        newNode -> next = p;
        q -> next = newNode;
    }
}

void display(struct Node *p){
    while (p != NULL){
        std::cout << p -> data << " ";
        p = p -> next;
    }
    std::cout << std::endl;
}

int main(){
    int n;
    std::cout << "Number of elements ";
    std::cin >> n;

    create_ll(n);
    std::cout << "Elements are ";
    display(head);

    int value;
    std::cout << "Value u wanna insert ";
    std::cin >> value;
    add_ele_in_sorted_ll(value);
    display(head);
    std::cout << std::endl;

    /** 
     * add_ele_in_sorted_ll(4);
     * add_ele_in_sorted_ll(45);
     * add_ele_in_sorted_ll(44);
     * add_ele_in_sorted_ll(40);
     * add_ele_in_sorted_ll(3);
    */
}