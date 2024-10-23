#include<iostream>
using namespace std;

void SwapZero(int arr[], int size){
    for(int i=size-1; i>=0; i--){
        int j=0;
        bool flag = false;
        while(j != i){
            if(arr[j] == 0 && arr[j+1] != 0){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                flag = true;
            }
            j++;
        }
        if(!flag) break;
    }
    return;
}

int main(){
    int arr[] = {0,5,0,3,42};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout<<"Unsorted array: ";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    SwapZero(arr,size);
    cout<<"Sorted array: ";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}