#include<iostream>
using namespace std;


void pivot(int arr[],int size,int key){
    int start=0;
    int end=size;
    int mid=start+(end-start)/2;
    while(start<=end){
        if(arr[mid]>=arr[0]){
            start=mid+1;
        }else{
            end=mid;
        }
        mid=start+(end-start) / 2;

    }
}
int main(){
    int arr[5]={7,8,1,2,3};
    int key=3;
    pivot(arr,5,key);
   
   return 0;

}