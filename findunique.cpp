#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,1};
    int ans=0;
    for(int i=0;i<5;i++){
        ans = ans ^ arr[i];
        if(ans==1){
           ans=arr[i];
           break; 
        }
    }
    cout<<ans;
    return 0;
}