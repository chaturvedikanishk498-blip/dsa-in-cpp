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

    int key = 10;

    int first = FirstOccurrence(arr,key,size);
    int last = LastOccurrence(arr,key,size);

    if(first == -1) {
        cout << "Total frequency of " << key << " in array is 0" << endl;
    }
    else {
        cout<<"total frequency of "<<key<<" in an array is "<<last - first + 1<<endl;
    }
}