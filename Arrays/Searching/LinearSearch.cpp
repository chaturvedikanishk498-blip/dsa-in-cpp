#include<iostream>
using namespace std;

int LinearSearch(int arr[], int key, int size) {

    for(int i=0;i<size;i++) {
        if(arr[i]==key) {
            return i;
        }
    }

    return -1;
}

int main() {
    int arr[] = {1,2,3,4,5,6,7,8};
    int size = sizeof(arr)/sizeof(arr[0]);

    int key = 88;

    int index = LinearSearch(arr,key,size);

    if(index != -1) {
        cout<<"Element "<< key <<" found at index "<<index<<endl;
    }
    else {
        cout<<"Element not found "<<endl;
    }
}