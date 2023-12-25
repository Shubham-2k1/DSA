#include<iostream>
using namespace std;
int main(){
    int nums[5]={1,2,3,4,5};
    int s=5;
    int k=2;

        //Approach 1
        // while(k>0){
        //     int temp = nums[s-1];

        //     for(int i=s-2;i>=0;--i){
        //         nums[i+1]=nums[i];
        //     }
        //     k--;
        //     nums[0]=temp;
        // }

        // for(int j=0;j<5;j++){
        //     cout<<nums[j]<<" ";
        // }

        // -x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x

        //Approach 2
        //    int s = nums.size();
        //     vector<int> temp(s);
        //    for(int i=0;i<s;i++){
        //        temp[(i+k)%s]=nums[i];
        //    }

        //    nums = temp;
        
    
}