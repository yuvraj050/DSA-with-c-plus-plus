#include <iostream>
using namespace std;
    
void SelectionSort(int arr[], int size){
    for(int i=0; i<size; i++){

        // finding min element in unsorted array
        int min_idx = i;
        for(int j=i+1; j<size; j++){
            if(arr[j] < arr[min_idx]){
                min_idx = j;
            }
        }
        
        // Placing min element at begining
        if(arr[min_idx] != i){
            int temp;
            temp = arr[i];
            arr[i] = arr[min_idx];
            arr[min_idx] = temp;
        }
    }
    return;
}    

int main(){

    int arr[] = {10,2,1,6,8};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout<<"Unsorted array: ";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    SelectionSort(arr,size);
    cout<<"Sorted array: ";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}