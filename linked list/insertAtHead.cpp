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

void InsertAtHead(Node* &head, int d) {
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}

void PrintList(Node* head) {
    Node* temp = head;
    while(temp!=NULL) {
        cout<<temp -> data<<" ";
        temp = temp -> next;
    }
    cout<<endl;
}

int main() {
    Node* node1 = new Node(10);
    Node* head = node1;

    InsertAtHead(head,20);
    InsertAtHead(head,30);
    InsertAtHead(head,40);
    InsertAtHead(head,50);
    InsertAtHead(head,60);

    PrintList(head);

}