#include <iostream>
using namespace std;

void InsertionSort(int arr[], int size){
    for(int i=1; i<size; i++){
        int current = arr[i];
        int j = i-1;
        while(j>=0 && arr[j]>current){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = current;
    }
    return;
}



int main(){
    int arr[] = {11,8,15,9,4};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout<<"Unsorted array: ";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    InsertionSort(arr,size);
    cout<<"Sorted array: ";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}