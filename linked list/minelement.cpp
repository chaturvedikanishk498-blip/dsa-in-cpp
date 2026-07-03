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
}

int minelement(Node* head) {
    if(head == NULL) {
        return -1;   // Returning -1 is a temporary solution.
                    // This edge case can be handled better using exceptions.
    }

    int mini = head -> data;
    Node* temp = head -> next;

    while(temp != NULL) {
        if(temp -> data < mini) {
            mini = temp -> data;
        }
        temp = temp -> next;
    }
    return mini;
}

void print(Node* head) {
    while(head != NULL) {
        cout<<head -> data<<" ";
        head = head -> next;
    }
    cout<<endl;
}

int main() {
    Node* node1 = new Node(20);
    Node* head = node1;
    Node* tail = node1;

    InsertAtTail(tail,87);
    InsertAtTail(tail,23);
    InsertAtTail(tail,89);
    InsertAtTail(tail,9);
    InsertAtTail(tail,82);
    InsertAtTail(tail,34);
    InsertAtTail(tail,99);

    print(head);

    cout<<"minimum element in a list is  : "<<minelement(head)<<endl;
}