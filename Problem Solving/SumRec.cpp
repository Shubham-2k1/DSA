#include<iostream>
using namespace std;

int sum(int *arr,int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return arr[0];
    }
    int remaining=sum(arr+1,n-1);
    int sum = arr[0]+remaining;
    return sum;
}
int main(){
    int arr[5]={1,2,3,4,5};
    int n=5;

    int ans=sum(arr,n);
    cout<<ans;
    return 0;
}