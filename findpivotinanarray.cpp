#include<iostream>
using namespace std;


int pivot(int arr[],int size){
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
    return start;
}
int main(){
    int arr[5]={7,8,1,2,3};
   cout<<"Pivot is: "<< pivot(arr,5);
   return 0;

}