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

void print(Node* head) {
    while(head != NULL) {
        cout<<head -> data<<" ";
        head = head -> next;
    }
    cout<<endl;
}

void InsertAtTail(Node* &tail, int data) {
    Node* temp = new Node(data);
    tail -> next = temp;
    tail = temp;
}

int RandomPositionData(Node* head, int position) {
    if(position <=0 || head == NULL) {
        return -1;
    }

    Node* temp = head;
    int count = 0;

    while(temp != NULL) {
        count++;
        if(count == position) {
            return temp -> data;
        }
        temp = temp -> next;
    }
    return -1;
}

int main() {
    Node* node1 = new Node(20);
    Node* head = node1;
    Node* tail = node1;

    InsertAtTail(tail,44);
    InsertAtTail(tail,92);
    InsertAtTail(tail,64);
    InsertAtTail(tail,91);
    InsertAtTail(tail,11);
    InsertAtTail(tail,58);
    InsertAtTail(tail,10);
    InsertAtTail(tail,34);

    print(head);

    cout<<"element at position 5 : "<<RandomPositionData(head,5)<<endl;
    cout<<"element at position 10 : "<<RandomPositionData(head,10)<<endl;

}
