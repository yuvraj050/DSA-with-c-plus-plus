#include <iostream>
using namespace std;

void reverse(int arr[], int n){
    int start = 0;
    int end = n-1;
    while(start <= end){
        swap(arr[start], arr[end]);
        start ++;
        end --;
    }
}

void print(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[6] = {2,7,5,9,1,11};
    
    print(arr,6);
    reverse(arr, 6);
    print(arr,6);
}