// class Solution {
// public:
//     bool uniqueOccurrences(vector<int>& arr) {
//         int ar[1000],count=0;
//         int k=0;
//         int check=arr[0];
//         sort(arr.begin(),arr.end());
//         for(int i=0;i<arr.size();i++){
//             for(int j=i+1;j<arr.size();j++){
                
//             if(arr[j]==check){
//                 count++;
//             }
//             }
//             ar[k]=count;
//             k++;
//             count=0;
//         }
//         int check2=ar[0];
//         for(int i=1;i<k;i++){
//             if(ar[i]==check2){
//                 return false;
//             }
//         }
//         return true;
//     }
// };