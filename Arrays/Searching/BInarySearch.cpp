#include<iostream>
using namespace std;

//Array must be sorted for Binary Search

int BinarySearch(int arr[], int key, int size) {
    int start = 0;
    int end = size - 1;

    while(start<=end) {
        int mid = start + (end - start)/2;
        if(arr[mid]==key) {
            return mid;
        }
        else if(arr[mid]>key) {
            end = mid - 1;
        }
        else {
            start = mid + 1;
        }
    }
    return -1;
}

int main() {
    int arr[] = {23,45,55,58,67,78,91};
    int size = sizeof(arr)/sizeof(arr[0]);

    int key = 91;

    int index = BinarySearch(arr,key,size);

    if(index != -1) {
        cout<<"Element "<<key<<" found at index "<<index<<endl;
    } else {
        cout<<"element not found "<<endl;
    }
}