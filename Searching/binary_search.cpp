#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key){
    int start = 0;
    int end = size-1;
    int mid = (start + end)/2;
    while(start <= end){
        if(arr[mid] == key){
            return mid;
        }
        //go to right part
        else if(arr[mid] < key){
            start = mid+1;
        }
        // go to left part
        else{
            end = mid-1;
        }
        mid = (start+end)/2;
    }
    return -1;
}

int main(){

    int arr[] = {2,4,5,6,7};
    int size = sizeof(arr)/sizeof(arr[0]);
    int key;
    cout<<"Enter the element you want to search: ";
    cin>>key;
    int result = binarySearch(arr,size,key);

    if(result == -1){
        cout<<"The element is not present"<<endl;
    }
    else{
        cout<<"The element is present at index "<<result<<endl;
    }

    return 0;
}