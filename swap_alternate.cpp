#include <iostream>
using namespace std;

void reverse(int arr[], int n){
    for(int i=0; i<n; i+2){
        if(i + 1 < n){
            swap(arr[i],arr[i+1]);
        }
    }
}

void print(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[6] = {1,3,2,7,11,18};
    int brr[5] = {11,33,9,76,43};

    print(arr,6);
    reverse(arr, 6);
    print(arr, 6);

    cout<<endl;

    print(brr, 5);
    reverse(brr, 6);
    print(brr, 6);

    return 0;
}