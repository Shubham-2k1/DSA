#include<iostream>
using namespace std;

bool lsearch(int arr[], int size, int key){

    for(int i=0;i<size;i++){

        if(arr[i]==key){
            return 1;
        }

    }
    return 0;
}
int main(){

    int arr[5]={1,2,3,4,5};
    int key;
    
    cin>>key;
    bool found = lsearch(arr,5,key);

    if(found){
        cout<<"Element found"<<endl;
    }
    else{
        cout<<"Element not found";
    }
}