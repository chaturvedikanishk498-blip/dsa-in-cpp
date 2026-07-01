#include<iostream>
using namespace std;

class Node {
    public :
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

void InsertAtPosition(Node* &head, int position, int data) {
    if(position <= 0) {
        return;
    }

    if(position == 1) {
        Node* temp = new Node(data);
        temp -> next = head;
        head = temp;
        return;
    }

    Node* temp = head;
    int count = 1;

    while(temp != NULL && count<(position-1)) {
        temp = temp -> next;
        count++;
    }
    if(temp == NULL) {
        return ;
    }
    Node* node2 = new Node(data);
    node2 -> next = temp -> next;
    temp -> next = node2;
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
    Node* node1 = new Node(10);

    Node* head = node1;
    Node* tail = node1;

    InsertAtTail(tail,20);
    InsertAtTail(tail,30);
    InsertAtTail(tail,40);
    InsertAtTail(tail,50);
    InsertAtTail(tail,60);

    print(head);

    InsertAtPosition(head,3,46);
    InsertAtPosition(head,1,39);

    print(head);

}