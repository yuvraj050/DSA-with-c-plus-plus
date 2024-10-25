#include <iostream>
using namespace std;

int Partition(int arr[], int first, int last){
    int pivot = arr[last];
    int i = first-1;
    int j = first;

    for(int j=first; j<last; j++){
        if(arr[j] < pivot){
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    int temp = arr[i+1];
    arr[i+1] = arr[last];
    arr[last] = temp;
    return i+1;
    
}


void Quicksort(int arr[],int first, int last){

    int pi;

    if(first >= last){
        return;
    }

    pi = Partition(arr,first,last);
    Quicksort(arr,first,pi-1);
    Quicksort(arr,pi+1,last);
}

int main(){
    int arr[] = {10,3,7,9,1,8};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<"Unsorted array: ";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    Quicksort(arr, 0, size-1);

    cout<<"Sorted array: ";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}