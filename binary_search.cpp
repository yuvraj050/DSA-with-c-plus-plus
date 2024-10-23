// only applied in acsending order or descending order case
// mid = (start index + end index) / 2

#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key){
    int start = 0;
    int end = size -1;
    int mid = (start + end)/2;

    while( start <= end){
        if( arr[mid] == key){
            return mid;
        }
        // go to right part
        if(key > arr[mid]){
            start = mid +1;
        }
        // go to left part
        else{
            end = mid -1;
        }
        mid = (start+end)/2;
    }
}

int main(){
    int even[6] = {2,4,6,8,10,12};
    int odd[5] = {3,6,9,12,15};

    int key;
    cout<<"Enter the key element you want to search: ";
    cin>>key;

    int index;

    index = binarySearch(even, 6, key);

    cout<<"Index of "<<key<<" is "<<index<<endl;

    return 0;
}