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

void print(Node* head) {
    while(head != NULL) {
        cout<<head -> data<<" ";
        head = head -> next;
    }
    cout<<endl;
}

void InsertAtTail(Node* &tail, int data) {
    Node* temp = new Node(data);
    tail -> next = temp ;
    tail = temp;
}

int LengthofNode(Node* head) {
    int count = 0;

    if(head == 0) {
        return count;
    }

    while(head != NULL) {
        count++;
        head = head -> next;
    }
    return count;
}

int main() {
    Node* node1 = new Node(20);
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

    cout<<LengthofNode(head)<<endl;

}