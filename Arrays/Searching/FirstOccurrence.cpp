#include<iostream>
using namespace std;

int FirstOccurrence(int arr[], int key, int size) {
    int start = 0;
    int end = size - 1;
    int first = -1;

   
    while(start<=end) {
        int mid = start + (end - start)/2;

        if(arr[mid]==key) {
            first = mid;
            end = mid - 1;
        } else if(arr[mid]<key) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return first;
}

int main() {
    int arr[] = {1,2,2,2,3,4,4,5,6,6,7,7,8};
    int size = sizeof(arr)/sizeof(arr[0]);

    int key = 2;

    int first = FirstOccurrence(arr,key,size);
    cout<<"First occurrence of element "<<key<<" is at index "<<first<<endl;
}