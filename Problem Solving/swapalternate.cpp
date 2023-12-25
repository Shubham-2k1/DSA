#include<iostream>
using namespace std;

void swapalternate(int arr[], int n){
    for(int i=0;i<n;i++){  

        if(i+1<n){
            
        int temp = arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;

        } 
        
    }
}
int main(){
    int arr[5]={1,2,3,4,5};
    
    swapalternate(arr,5);

    cout<<"Swapped Array: ";
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}