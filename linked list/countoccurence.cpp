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
    while(head != NULL) {
        cout<<head -> data<<" ";
        head = head -> next;
    }
    cout<<endl;
}

int CountOccurrence(Node* head, int key) {
    int count = 0;

    if(head == NULL) {
        return count;
    }

    while(head != NULL) {
        if(head -> data == key) {
            count++;
        }
        head = head -> next;
    }
    return count;
}

int main() {
    Node* node1 = new Node(5);
    Node* head = node1;

    Node* tail = node1;

    InsertAtTail(tail,10);
    InsertAtTail(tail,43);
    InsertAtTail(tail,32);
    InsertAtTail(tail,10);
    InsertAtTail(tail,82);
    InsertAtTail(tail,10);
    InsertAtTail(tail,70);

    print(head);

}