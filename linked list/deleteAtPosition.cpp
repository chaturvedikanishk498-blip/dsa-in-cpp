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

void DeleteAtPosition(Node* &head, int position) {
    if(head == NULL || position <= 0) {
        return;
    }
    if(position == 1) {
        Node* node1 = head;
        head = head -> next;
        delete node1;
        return;
    }

    if(position > 1) {
        Node* prev = NULL;
        Node* curr = head;

        int count = 1;
        while(curr != NULL && count < position) {
            count++;
            prev = curr;
            curr = curr -> next;

        }

        if(curr == NULL) {
            return;
        }

        prev -> next = curr -> next;
        delete curr;
    }

}

void InsertAtTail(Node* &tail, int data) {
    Node* temp = new Node(data);
    tail -> next  = temp;
    tail = temp;
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
    InsertAtTail(tail,250);
    InsertAtTail(tail,206);
    InsertAtTail(tail,520);
    InsertAtTail(tail,230);

    print(head);

    DeleteAtPosition(head,3);

    print(head);

    DeleteAtPosition(head,1);

    print(head);

}