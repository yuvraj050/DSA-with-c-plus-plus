#include <iostream>
using namespace std;

void merge(int arr[], int l, int mid, int r){
    int an = mid-l+1;
    int bn = r - mid;
    // create 2 temp array
    int a[an];
    int b[bn];

    for(int i = 0; i<an; i++){
        a[i] = arr[l+i];
    }
    for(int j=0; j<bn; j++){
        b[j] = arr[mid+1+j];
    }
    // now to fill the subarray with sorted elements
    int i=0;
    int j=0;
    int k=l;

    while(i<an && j<bn){
        if(a[i] < b[j]){
            arr[k++] = a[i++];
        }
        else{
            arr[k++] = b[j++];
        }
    }
    while(i<an){
        arr[k++] = a[i++];
    }
    while(j<bn){
        arr[k++] = b[j++];
    }
}

void mergeSort(int arr[], int l, int r){

    // base case
    if(l>=r){
        return;
    }

    int mid = (l+r)/2;
    // recursive case
    mergeSort(arr, l, mid); // array ko sort kar ke lao from array to mid
    mergeSort(arr, mid+1, r); // and array ko sort kar ke lao from mid+1 to r
    merge(arr, l, mid, r); // sorted subarrays get merged
}


int main(){
    int arr[] = {10,28, 24, 6, 34, 18, 38, 44};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout<<"Unsorted array: ";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    mergeSort(arr, 0, size-1);
    cout<<"Sorted array: ";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}