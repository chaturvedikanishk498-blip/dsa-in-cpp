#include<iostream>
using namespace std;

class Node {
    public :
    int data;
    Node* next;

    Node(int d) {
        this -> data = d;
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

int main() {
    Node* node1 = new Node(5);
    Node* head = node1;

    Node* tail = node1;

    InsertAtTail(tail,10);
    InsertAtTail(tail,20);
    InsertAtTail(tail,30);
    InsertAtTail(tail,40);
    InsertAtTail(tail,50);
    InsertAtTail(tail,60);
    InsertAtTail(tail,70);

    print(head);

}