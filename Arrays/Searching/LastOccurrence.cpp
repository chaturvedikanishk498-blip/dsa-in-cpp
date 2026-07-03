#include<iostream>
using namespace std;

int LastOccurrence(int arr[], int key, int size) {
    int start = 0;
    int end = size - 1;

    int last = -1;

    while(start<=end) {

        int mid = start + (end - start)/2;

        if(arr[mid]==key) {
            last = mid;
            start = mid + 1;
        }
        else if(arr[mid]>key) {
            end = mid - 1;
        }
        else {
            start = mid + 1;
        }
    }
    return last;
}

int main() {
    int arr[] = {1,2,2,2,3,4,4,5,6,6,7,7,8};
    int size = sizeof(arr)/sizeof(arr[0]);

    int key = 6;

    int last = LastOccurrence(arr,key,size);

    cout<<"last occurrence of an element "<<key<<" is at index "<<last<<endl;

}