// Time complexity = O(n)
#include <iostream>
using namespace std;

bool search(int arr[], int size, int key){
    for(int i=0; i<size; i++){
        if(arr[i] == key){
            return 1;
        }
    }
    return 0;
}

int main(){
    int arr[10] = {5,6,7,1,10,22,-2,21,30,12};
    int key;
    cout<<"Enter the key element you want to search: ";
    cin>>key;
    bool found;
    found = search(arr,10,key);
    if(found == 1){
        cout<<"The key element is present"<<endl;
    }
    else{
        cout<<"The key element is not present"<<endl;
    }
    return 0;
}