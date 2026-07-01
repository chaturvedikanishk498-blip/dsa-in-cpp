#include<iostream>
using namespace std;

class Node {
    public:
     
    int data;
    Node* next;

    Node(int data) {
        this -> data = data;
        this -> next = NULL;
    }
};

void InsertAtTail(Node* &tail, int data) {
    Node* temp = new Node(data);
    tail -> next = temp;
    tail = temp;
    return;
}

void print(Node* head) {
    Node* temp = head;
    while(temp != NULL) {
        cout<<temp -> data<<" ";
        temp = temp -> next;
    }
    cout<<endl;
}

bool SearchElement(Node* head, int key) {
    while(head != NULL) {
        if(head -> data == key) {
            return true;
        }
        head = head -> next;
    }
    return false;
}

int main() {
    Node* node1 = new Node(10);

    Node* head = node1;
    Node* tail = node1;

    InsertAtTail(tail,20);
    InsertAtTail(tail,30);
    InsertAtTail(tail,40);
    InsertAtTail(tail,50);
    InsertAtTail(tail,60);

    print(head);

    cout<<SearchElement(head,30);

}