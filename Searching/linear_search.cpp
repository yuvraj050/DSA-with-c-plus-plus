#include <iostream>
using namespace std;

int Search(int arr[], int size, int key){
    for(int i=0; i<size; i++){
        if(arr[i] == key){
            return i;
        }
    }
    return -1;
}


int main(){

    int arr[] = {2,1,4,0,-2,10,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    int key;
    cout<<"Enter the element you want to search: ";
    cin>>key;

    int index = Search(arr, size, key);

    if(index == -1){
        cout<<"The element is not present"<<endl;
    }
    else{
        cout<<"The element is present at index "<<index<<endl;
    }
    return 0;
}